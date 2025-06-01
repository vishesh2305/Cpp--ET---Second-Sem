#include <iostream>
#include <vector>
using namespace std;



int main(){
    int T;
    cout << "Enter the number of testcases\n";
    cin >> T;
    while(T--){
        int N;
        cout << "Enter the size of array\n";
        cin >>N;
        vector<int> arr(N);
        for(int i=0; i<N; i++){
            cin >>arr[i];
        };
    int pos = 0;
      for(int i=0; i<arr.size(); i++){
        if(arr[i] !=0){
            arr[pos] = arr[i];
            pos++;
        };
      };
      while(pos < arr.size()){
        arr[pos] = 0;
        pos++;
      };
        for(int i=0; i<N; i++){
            cout <<arr[i]<<' ';
        };
        cout << endl;
    };
    return 0;
}