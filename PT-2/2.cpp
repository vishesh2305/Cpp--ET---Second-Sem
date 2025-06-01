#include <iostream>
#include <vector>
using namespace std;



int main(){
    int T;
    cout << "Enter the number of testcases : ";cin>>T;

    while(T--){
        int N;
        cout << "Enter the number of elements : ";cin>>N;
        vector<int> arr(N);

        for(int i=0; i<N; i++){
            cout << "Enter the "<<i<<" element : ";
            cin >> arr[i];
        };
        for(int i=0; i<N-1; i++){
            for(int j=0; j<N-i-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            };
        };
        };

        for(int i=0; i<N; i++){
            cout << arr[i]<<" ";
        }
        cout << endl;

        int K;
        cout << "Enter the Kth element : ";cin>>K;

        cout << arr[K-1]<<endl;
    }



    return 0;
};