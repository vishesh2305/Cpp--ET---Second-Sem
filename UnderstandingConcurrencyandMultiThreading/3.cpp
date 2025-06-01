#include <iostream>
#include <vector>
#include <thread>
using namespace std;

void square(const vector<int>& a, vector<int>& result, size_t start_index, size_t end_index){


    for(size_t i=start_index; i<end_index; ++i){
        if(i<a.size() && i<result.size()){
            result[i] = a[i]*a[i];
        };
    };
};




int main(){

    const int N = 10000;

    vector<int> A(N),C(N);


    for(int i=0; i<N; i++){
        A[i] = i;
    };

    unsigned int num_threads = thread::hardware_concurrency();
    if(num_threads == 0)num_threads =2;

    vector<thread> threads;

    size_t chunksize = N/num_threads;
    size_t lastchunksize = N % num_threads;

    for( unsigned int i=0; i < num_threads; i++){
        size_t start = i*chunksize;
        size_t end = (i+1)*chunksize;

        if(i == num_threads - 1){
            end += lastchunksize;
        };

        threads.emplace_back(square, ref(A), ref(C), start, end);    
    };

    for(thread& t:threads){
        if(t.joinable()){
            t.join();
        }
    };


    cout << "Vector squaring complete : "<<endl;

    for(int i=0; i<10; i++){
        cout << C[i]<< endl;
    };



    return 0;

};