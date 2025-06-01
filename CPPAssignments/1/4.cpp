#include <iostream>
using namespace std;



// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i=0; i<5; i++){
//         cout << arr[i] << ' ';
//     }
//     return 0;
// };



// int main(){
//     int arr[3] = {10,20,30};
//     int sum =0;
//     for(int i=0; i<size(arr); i++){
//         sum+= arr[i];
//     };
//     cout << "Sum of elements: "<<sum<<endl;
//     return 0;
// };



// int main(){
//     int arr[] = {4,8,1,7};
//     int arrsize = sizeof(arr)/sizeof(arr[0]);
//     int largestelement =0;
//     for(int i=0; i<arrsize; i++){
//         if(arr[i] > largestelement){
//             largestelement=arr[i];
//         };
//     };
//     cout << largestelement<<endl;
// return 0;
// }




// int main(){
//     int arr[] = {4,8,1,7};
//     int smallestelement = arr[0];
//     int arrsize = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<arrsize; i++){
//         if(smallestelement  >arr[i]){
//             smallestelement = arr[i];
//         }
//     }
//     cout << "Smallest element: "<<smallestelement<<endl;
//     return 0;
// };




// int main(){
//     int arr[] = {5,10,15,20};
//     int value = 12;
//     int arrsize = sizeof(arr)/sizeof(arr[0]);
//     int count=0;
//     for(int i=0; i<arrsize; i++){
//         if(arr[i] > value){
//             count++;
//         };
//     };
//     cout << "Count: "<<count<<endl;
//     return 0;
// };



// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int sizearr = sizeof(arr)/sizeof(arr[0]);
//     cout << "Even Numbers: ";
//     for(int i=0; i<sizearr; i++){
//         if(arr[i] % 2 == 0){
//         cout<<arr[i]<<" ";
//         };
//     };
//     return 0;
// };




// int main(){
//     int arr[] = {1,2,3,4,5};
//     int sizearr = sizeof(arr)/sizeof(arr[0]);
//     cout << "Odd numbers: ";
//     for(int i=0; i<sizearr; i++){
//         if(arr[i] %2 !=0){
//             cout << arr[i] << " ";
//         }
//     }
// return 0;
// };



// int main(){
//     int arr[] = {2,4,6};
//     int sizearr = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<sizearr; i++){
//         arr[i] *= 2;
//     };
//     cout << "New array: {";
//     for(int i=0; i<sizearr; i++){
//         cout << arr[i]<<", ";
//     }
//     cout << "}";
//     return 0;
// };



// int main(){
//     int arr[] = {3,7,9,2};
//     int sizearr = sizeof(arr)/sizeof(arr[0]);
//     int num = 7;
//     for(int i=0; i<sizearr; i++){
//        if(arr[i] == num){
//         cout << "Number found: true";
//         break;
//        };
//     };
//     return 0;
// };



// int main(){
//     int arr[] = {5,10,15,20,25};
//     int arrsize = sizeof(arr)/sizeof(arr[0]);
//     cout << "First element: "<< arr[0]<<endl;
//     cout << "Last element: "<< arr[arrsize-1]<<endl;
//     return 0;
// }



// int main(){
//     int arr[] = {1,2,3,4,5};
//     int sizearr=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<sizearr/2; i++){
//         int temp = arr[i];
//         arr[i] = arr[sizearr - 1 -i];
//         arr[sizearr - 1 -i] = temp;
//     };
//     for(int i=0; i<sizearr; i++){
//         cout << arr[i]<< ' ';
//     };
//     return 0;
// };




// int main(){
//     int arr[] = {12,3,5,8,10};
//     int arrsize = sizeof(arr)/sizeof(arr[0]);
//     int evencount =0;
//     int oddcount =0;
//     for(int i=0; i<arrsize; i++){
//         if(arr[i] % 2 ==0){
//             evencount++;
//         }else{
//             oddcount++;
//         };
//     };
//     cout << "Even count: "<<evencount<<", Odd count: "<<oddcount<<endl;
//     return 0;
// }




// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int arrsize = sizeof(arr)/sizeof(arr[0]);
//     bool issorted = true;
//     for(int i=0; i <arrsize -1; i++){
//         if(arr[i] > arr[i+1]){
//             issorted= false;
//             break;
//         };
//     };
//     if(issorted){
//         cout << "Array is sorted: true"<<endl;
//     } else{
//         cout << "Array is sorted: false"<<endl;
//     };
// };




// int main(){
//     int arr1[] = {1,2,3};
//     int arr2[] = {4,5,6};
//     int size1= sizeof(arr1) / sizeof(arr1[0]);
//     int size2= sizeof(arr2) / sizeof(arr2[0]);
//     int merged[size(arr1) + size(arr2)];
//     for(int i=0; i<size1; i++){
//         merged[i] = arr1[i];
//     };
//     for(int i=0; i <size2; i++){
//         merged[size1 + i] = arr2[i];
//     };

//     cout << "Merged Array"<<endl;

//     for(int i=0; i<size(merged); i++){
//         cout << merged[i]<<" ";
//     };
//     return 0;
// };




// int main(){
//     int arr[] = {1,2,2,3,1,3,1};
//     int sizearr = sizeof(arr)/sizeof(arr[0]);
//     bool visited[sizearr] = {false};

//     for(int i=0; i<sizearr; i++){
//         if(visited[i] == true){
//             continue;
//         };

//         int count =1;

//         for(int j=i+1; j<sizearr; j++){
//             if(arr[i] == arr[j]){
//                 visited[j] = true;
//                 count++;
//             }
//         };

//         cout << arr[i] << " appears "<<count<<" times "<<endl;

//     };

    
//     return 0;
// }