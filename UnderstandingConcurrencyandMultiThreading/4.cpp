#include <iostream>
#include <vector>
#include <thread>
using namespace std;

void addvector(vector<int>& a, vector<int>& b, vector<int>& c, size_t start_index, size_t end_index){

    for(size_t i =start_index; i<end_index; ++i){

        if(i<a.size()&& i<b.size()&& i < c.size()){
            c[i] = a[i] + b[i];
        };
    };
};




int main(){
    const int N = 10000;

    vector<int> A(N), B(N), C(N);

    for(int i=0; i<N; i++){
        A[i] = i;
        B[i] = i*2;
    };


    unsigned int num_threads = thread::hardware_concurrency();
    if(num_threads ==0) num_threads = 2;

    vector<thread> threads;

    size_t chunksize = N/num_threads;
    size_t lastchunksize = N%num_threads;


    for(unsigned int i=0; i<num_threads; i++){
        size_t start = i*chunksize;
        size_t end = (i+1)*chunksize;
        if(i == num_threads-1){
            end += lastchunksize;
        };

        end = min(end, (size_t)N);

        threads.emplace_back(addvector, ref(A), ref(B),ref(C), start, end);
    };


    for(thread& thread: threads){
        if(thread.joinable()){
            thread.join();
        };
    };




    for(int i=0; i<10; i++){
        cout << C[i]<<endl;
    };



    return 0;



}