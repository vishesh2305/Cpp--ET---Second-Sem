#include <iostream>
#include <vector>
#include <thread>
using namespace std;
void multiplymatrix_row(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& result, size_t startrow, size_t endrow){
    if(A.empty() || B.empty() || B[0].empty() || A[0].size() != B.size()){
        return ;
    }
    size_t m = A.size();
    size_t n = B.size();
    size_t p = B[0].size();
    for(size_t i =startrow; i<endrow && i <m; ++i){
        for(size_t j=0; j<p; ++j){
            int sum =0;
            for(size_t k =0; k<n; ++k){
                sum += A[i][k] * B[k][j];
            }
            result[i][j] = sum;
        };
    }
};



int main(){
    vector<vector<int>>A = {{1,2,3}, {2,3,5}};   // 2x3
    vector<vector<int>> B = {{5,6}, {8,9}, {2,5}};    // 3x2
    // therefore these should give 2x2 matrix as a result.
    if(A.empty() || B.empty()|| A[0].size() != B.size()){
        cerr << "Matrices cannot be multiplies due to dimensions "<< endl;
        return 1;
    };
    size_t m = A.size();
    size_t p = B[0].size();
    vector<vector<int>> C(m, vector<int>(p));

    unsigned int numthreads = thread::hardware_concurrency();
    if(numthreads ==0) numthreads = 2;
    numthreads = min(numthreads, (unsigned int)m);
    vector<thread> threads;

    
    size_t rowsperthread= m/numthreads;
    size_t extrarows = m%numthreads;
    size_t currentstartRow = 0;
    for(unsigned int i=0; i<numthreads; ++i){
        size_t numrowsforthisthread = rowsperthread + (i<extrarows ? 1 : 0);
        if(numrowsforthisthread == 0) continue;
        size_t endrow = currentstartRow + numrowsforthisthread;
        threads.emplace_back(multiplymatrix_row, ref(A), ref(B), ref(C), currentstartRow, endrow);
        currentstartRow = endrow;
    };
    for(thread& t: threads){
        if(t.joinable()){
            t.join();
        }
    };
    cout << "Matrix Multiplication Complete : "<< endl;
    for(size_t i =0; i<m; ++i){
        for(size_t j=0; j<p; j++){
            cout << C[i][j]<<" ";
        };
        cout << endl;
    }
    return 0;
};