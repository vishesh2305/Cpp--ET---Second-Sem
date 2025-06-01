// #include<iostream>
// #include <p.thread>
// using namespace std;
// void *thread1(void *args){
//     for(int i=1;i<=10;i++){
//         cout<< i*2 <<endl;
//     }
//     cout<<"Thread1 is running"<<endl;
// }
// void *thread2(void *args){
//     for(int i=1;i<=10;i++){
//         cout<< (i*2)-1 <<endl;
//     }
//     cout<<"Thread2 is running"<<endl;
// }
// int main(){
//     pthread_t t1,t2;
//     pthread_create(&t1,nullptr,thread1,nullptr);
//     pthread_create(&t2,nullptr,thread2,nullptr);    
//     pthread_join(t1,nullptr);
//     pthread_join(t2,nullptr);   
// }


// // #include<iostream>
// // #include<thread>
// // using namespace std;
// // void thread1(){
// //     for(int i=1;i<=10;i++){
// //         cout<< i*2 <<endl;
// //     }
// //     cout<<"Thread1 is running"<<endl;
// // }
// // void thread2(){
// //     for(int i=1;i<=10;i++){
// //         cout<< (i*2)-1 <<endl;
// //     }
// //     cout<<"Thread2 is running"<<endl;
// // }
// // int main(){
// //     thread t1(thread1);
// //     thread t2(thread2);
// //     t1.join();
// //     t2.join();
// // }


// // #include<iostream>
// // #include<thread>
// // using namespace std;
// // const int s =2;
// // int array1[s][s]={
// //     {1,2},
// //     {3,4}
// // };
// // int array2[s][s]={
// //     {5,6},
// //     {7,8}
// // };

// // int result[s][s];

// // void multiply(int row, int col){
// //     result[row][col]=0;
// //     for(int k=0; k<s ;k++){
// //        result[row][col] += array1[row][k]*array2[k][col];
// //     }
// // }

// // int main(){
// //     thread t1[s][s];
// //     for (int i=0;i<s;i++){
// //         for(int j= 0 ;j<s;j++){
// //            t1[i][j] =  thread(multiply , i ,j);
// //         }
// //     }
// //     for (int i=0;i<s;i++){
// //         for(int j= 0 ;j<s;j++){
// //            t1[i][j].join();
// //         }
// //     }
// //     for (int i=0;i<s;i++){
// //         for(int j= 0 ;j<s;j++){
// //            cout<<result[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }   
// // }


// // #include <iostream>
// // #include <thread>

// // using namespace std;

// // const int SIZE = 2;

// // int A[SIZE][SIZE] = {{1, 2},{3, 4}};

// // int B[SIZE][SIZE] = {
// //     {5, 6},
// //     {7, 8}};

// // int result[SIZE][SIZE];

// // // Function to compute one element of the result matrix
// // void multiplyElement(int row, int col)
// // {
// //     result[row][col] = 0;
// //     for (int k = 0; k < SIZE; ++k)
// //     {
// //         result[row][col] += A[row][k] * B[k][col];
// //     }
// // }

// // int main()
// // {
// //     thread t1[SIZE][SIZE];

// //     // Create a thread for each element in the result matrix
// //     for (int i = 0; i < SIZE; ++i)
// //     {
// //         for (int j = 0; j < SIZE; ++j)
// //         {
// //             t1[i][j] = thread(multiplyElement, i, j);
// //         }
// //     }

// //     // Join all threads
// //     for (int i = 0; i < SIZE; ++i)
// //     {
// //         for (int j = 0; j < SIZE; ++j)
// //         {
// //             t1[i][j].join();
// //         }
// //     }

// //     // Display result matrix
// //     cout << "Result matrix:\n";
// //     for (int i = 0; i < SIZE; ++i)
// //     {
// //         for (int j = 0; j < SIZE; ++j)
// //         {
// //             cout << result[i][j] << " ";
// //         }
// //         cout << endl;
// //     }

// //     return 0;
// // }


// // #include<iostream>
// // #include<pthread.h>
// // using namespace std;

// // void* thread1(void *args){
// //     cout<<"Hello from thread 1"<<endl;
// // }
// // void* thread2(void *args){
// //     cout<<"Hello from thread 2"<<endl;
// // }
// // int main(){
// //     pthread_t t1,t2;
// //     pthread_create(&t1, nullptr , thread1 , nullptr);
// //     pthread_create(&t2, nullptr , thread2 , nullptr);
// //     pthread_join(t1,nullptr);
// //     pthread_join(t2,nullptr);
// // }

// // #include<iostream>
// // #include<pthread.h>
// // using namespace std;

// // void* sum(void* args){
// //     int a=5, b=3;
// //     cout<<"Sum is:- "<<a+b<<endl;
// // }

// // void* product(void* args){
// //     int a=5, b=3;
// //     cout<<"Product is:- "<<a*b<<endl;
// // }
// // int main(){
// //     pthread_t t1,t2;
// //     pthread_create(&t1, nullptr , sum , nullptr);
// //     pthread_create(&t2, nullptr , product , nullptr);   
// //     pthread_join(t1, nullptr);
// //     pthread_join(t2,nullptr);
// // }

// // #include<iostream>
// // #include<pthread.h>
// // using namespace std;

// // pthread_mutex_t lock= PTHREAD_MUTEX_INITIALIZER;
// // int arr[]={2,4,6,8,10,12};
// // int sum1=0 , sum2=0;

// // void* sum(void* args){
// //     pthread_mutex_lock(&lock);
// //     for (int i=0;i<3;i++){
// //         sum1+=arr[i];
// //     }
// //     cout<<"Sum of first half :- "<<sum1<<endl;
// //     // return nullptr;
// //     pthread_mutex_unlock(&lock);
// //     return nullptr;
// // }

// // void* product(void* args){
// //     pthread_mutex_lock(&lock);
// //     for (int i=3;i<6;i++){
// //         sum2+=arr[i];
// //     }
// //     cout<<"Sum of Second half :- "<<sum2<<endl;
// //     // return nullptr;
// //     pthread_mutex_unlock(&lock);
// //     return nullptr;
// // }
// // int main(){
// //     pthread_t t1,t2;
// //     pthread_create(&t1, nullptr , sum , nullptr);
// //     pthread_create(&t2, nullptr , product , nullptr);   
// //     pthread_join(t1, nullptr);
// //     pthread_join(t2,nullptr);
// //     pthread_mutex_destroy(&lock);
// // }

// // #include <iostream>
// // #include <pthread.h> // for pthreads
// // using namespace std;

// // int arr[] = {2, 4, 6, 8, 10, 12};
// // int sum1 = 0, sum2 = 0;
// // pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

// // void* sum(void* args) {
// //     pthread_mutex_lock(&lock);
// //     for (int i = 0; i < 3; i++) {
// //         sum1 += arr[i];
// //     }
// //     cout << "Sum of first half :- " << sum1 << endl;
// //     pthread_mutex_unlock(&lock);
// //     return nullptr;
// // }

// // void* product(void* args) {
// //     pthread_mutex_lock(&lock);
// //     for (int i = 3; i < 6; i++) {
// //         sum2 += arr[i];
// //     }
// //     cout << "Sum of Second half :- " << sum2 << endl;
// //     pthread_mutex_unlock(&lock);
// //     return nullptr;
// // }

// // int main() {
// //     pthread_t t1, t2;

// //     // Create threads
// //     if (pthread_create(&t1, nullptr, sum, nullptr) != 0) {
// //         cerr << "Failed to create thread 1\n";
// //         return 1;
// //     }

// //     if (pthread_create(&t2, nullptr, product, nullptr) != 0) {
// //         cerr << "Failed to create thread 2\n";
// //         return 1;
// //     }

// //     // Join threads
// //     pthread_join(t1, nullptr);
// //     pthread_join(t2, nullptr);

// //     pthread_mutex_destroy(&lock);

// //     return 0;
// // }


// // #include <iostream>
// // #include <pthread.h>
// // #include <mutex>
// // using namespace std;

// // // Global data
// // int arr[] = {2, 4, 6, 8, 10, 12};
// // int sum1 = 0, sum2 = 0;
// // mutex mtx; // 🔐 Mutex for synchronization

// // // Thread 1: sum of first half
// // void* sum(void* args) {
// //     mtx.lock(); // 🔒 Lock before modifying shared data
// //     for (int i = 0; i < 3; i++) {
// //         sum1 += arr[i];
// //     }
// //     cout << "Sum of first half: " << sum1 << endl;
// //     mtx.unlock(); // 🔓 Unlock after done
// //     return nullptr;
// // }

// // // Thread 2: sum of second half
// // void* product(void* args) {
// //     mtx.lock(); // 🔒 Lock before modifying shared data
// //     for (int i = 3; i < 6; i++) {
// //         sum2 += arr[i];
// //     }
// //     cout << "Sum of second half: " << sum2 << endl;
// //     mtx.unlock(); // 🔓 Unlock after done
// //     return nullptr;
// // }

// // int main() {
// //     pthread_t t1, t2;

// //     pthread_create(&t1, nullptr, sum, nullptr);
// //     pthread_create(&t2, nullptr, product, nullptr);

// //     pthread_join(t1, nullptr);
// //     pthread_join(t2, nullptr);

// //     return 0;
// // }

// // #include<iostream>
// // #include<thread>
// // using namespace std;
// // int arr1[]={1,2,3,4,5,6,7,8};
// // int arr2[]={8,7,6,5,4,3,2,1};
// // mutex m;
// // int result[]={};
// // void addsum1(){
// // m.lock();
// // for(int i=0;i<4;i++){
// //     result[i]=arr1[i]+arr2[i];
// // }
// // m.unlock();
// // }
// // void addsum2(){
// //     m.lock();
// //     for(int i=4;i<8;i++){
// //         result[i]=arr1[i]+arr2[i];
// //     }
// //     m.unlock();
// // }
// // int main(){
// //     thread t1(addsum1);
// //     thread t2(addsum2);
// //     t1.join();
// //     t2.join();
// //     for(int i=0;i<8;i++){
// //         cout<<result[i]<<" ";
// //     }
// // }