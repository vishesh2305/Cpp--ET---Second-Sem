#include <iostream>
#include <cmath>
using namespace std;



// int main(){
//     int N;
//     cout << "Enter a Number : ";cin>>N;
//     for(int i=1; i<=N; i++){
//         for(int j=1; j<=N; j++){
//             cout << i*j << ' ';
//         };
//         cout << endl;
//     };
//     return 0;
// };





// int main(){
//     int N;
//     cout << "Enter a Number : "; cin >>N;
//     for(int i=1; i<=N; i++){
//         for(int space = 0; space< N-i; space++){
//             cout << " ";
//         };
//         for(int j =1; j<=i; j++){
//             cout << j;
//         };
//         for(int j=i-1; j>=1; j--){
//             cout << j;
//         };
//         cout << endl;
//     };
//     return 0;
// };





// int main(){
//     int N;
//     cout << "Enter a number : "; cin>>N;
//     for(int i=1; i<=N; i++){
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     };
//     return 0;
// }



// int main(){
//     int N;
//     cout << "Enter a Number : "; cin>>N;
//     for(int i=1; i<=N; i++){
//         for(int j=1; j<=N; j++){
//         if(i%2 == 0){
//             cout << " *";
//         }else{
//             cout << "* ";
//         }
//     };
//     cout << endl;
//     };
//     return 0;
// };





// int main(){
//     int N;
//     cout << "Enter a Number : "; cin >> N;
//     for(int i=2; i<=N; i++){
//         bool isPrime = true;
//         for(int j=2; j<=sqrt(i); j++){
//             if(i%j == 0){
//                 isPrime = false;
//                 break;
//             }
//         };
//         if(isPrime){
//             cout << i << " ";
//         }  
//     };
//     cout << endl;
// return 0;
// };



// int main(){
//     int N;
//     cout <<"Enter a Number : ";cin>>N;
//     for(int i=1; i<=N; i++){
//         cout << "Divisors of "<<i<<": ";
//         for(int j=1; j<=i; j++){
//             if(i%j ==0){
//                 cout << j << " ";
//             };
//         };
//         cout << endl;
//     };
//     return 0;
// };




// int main(){
//     int N;
//     cout << "Enter a Number : ";cin>>N;
//     for(int i=1; i<=N; i++){
//         for(int j=1; j<=N; j++){
//             cout << "* ";
//         };
//         cout << endl;
//     };
//     return 0;
// };

// int main(){
//     int N;
//     cout << "Enter a Number : ";cin>>N;
//     for(int i=1; i<=N; i++){
//         for(int j=1; j<=i;j++){
//             cout << i*j<<" ";
//         };
//         cout << endl;
//     };
// return 0;
// }



int main(){
    int N;
    cout << "Enter a Number : ";cin>>N;

    for(int i=1; i<=N; i++){

        for(int space = 1; space<= N -i; space++){
            cout << "  ";
        };

        for(int j = 1; j<=(i*2)-1;j++){
            cout << "* ";
        };

        cout << endl;
    };
    return 0;
}