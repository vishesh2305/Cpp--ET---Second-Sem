#include <iostream>
#include <vector>
#include <thread>
using namespace std;


void add_vector_chunk(const vector<int>& a, const vector<int>& b, vector<int>& result, size_t start_index, size_t end_index){

    for(size_t i = start_index; i< end_index; ++i){
        if(i<a.size() && i<b.size() && i<result.size()){
            result[i] = a[i] + b[i];
        }
    }

}

int main(){
    const int N = 10000;
    vector<int> A(N), B(N), C(N);


    for(int i=0; i<N; ++i){
        A[i] = i;
        B[i] = i*2;
    };


    unsigned int num_threads= thread::hardware_concurrency();
    if(num_threads == 0) num_threads =2;


    vector<thread> threads;

    size_t chunk_size = N/num_threads;
    size_t last_chunk_extra = N % num_threads;


    for(unsigned int i=0; i< num_threads; ++i){
        size_t start = i*chunk_size;
        size_t end = (i+1) * chunk_size;
        if(i == num_threads -1){
            end += last_chunk_extra;
        };

        end = min(end, (size_t)N);


        if(start<end){
            threads.emplace_back(add_vector_chunk, ref(A), ref(B), ref(C), start, end);

        }
    };

        for(thread& t: threads){
            if(t.joinable()){
                t.join();
            }
        }


        cout << "Vector addition complete."<<endl;

        return 0;
    }