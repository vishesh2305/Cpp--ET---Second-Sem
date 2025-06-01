#include <iostream>
#include <thread>
#include <vector>
using namespace std;



void matrixmul(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& result, size_t start, size_t end){

    if(A.empty() || B.empty() || B[0].empty() || A[0].size() != B.size()){
        return ;
    };
    
    size_t m = A.size();
    size_t n = B.size();
    size_t p = B[0].size();

    for(size_t i =start; i<end && i<m; ++i){
        for(size_t j =0; j<p;++j){
            int sum =0;
            for(size_t k=0; k<n;k++){
                sum += A[i][k]*B[k][j];
            };
            result[i][j] = sum;
        }
    }

};

int main(){
    vector<vector<int>> A = {{1,2,3, 6}, {4,5,6, 6}, {2,4,6, 6}, { 1,2,3,4}};
    vector<vector<int>> B = {{3,7,2, 6}, {5,7,8, 6}, {2,4,5, 6}, { 1,2,3,4}};

    if(A.empty() || B.empty() || B[0].empty() || A[0].size() != B.size()){
        return 1;
    }


    size_t m = A.size();
    size_t n = B[0].size();

    vector<vector<int>> C(m, vector<int>(n));

    unsigned int numthreads = thread::hardware_concurrency();
    if(numthreads == 0) numthreads = 2;
    numthreads = min(numthreads, (unsigned int)m);
    vector<thread> threads;

    size_t rowsperthread = m/numthreads;
    size_t extrarows = m%numthreads;
    size_t currentstartrow = 0;

    for(unsigned int i=0; i<numthreads; ++i){
        size_t numofrowsforthisthread = rowsperthread + (i<extrarows ? 1 : 0);
        if(numofrowsforthisthread == 0) continue;

        size_t endrow = numofrowsforthisthread + currentstartrow;

        threads.emplace_back(matrixmul, ref(A), ref(B), ref(C), currentstartrow, endrow);
        currentstartrow = endrow;
    };

    for(thread& t:threads){
        if(t.joinable()){
            t.join();
        };
    };


    cout << "Matrix Multiplicaiton completed : \n";

    for(size_t i =0; i<m; ++i){
        for(size_t j =0; j<n; ++j){
            cout << C[i][j]<< " ";
        };
        cout << endl;
    }


return 0;
}