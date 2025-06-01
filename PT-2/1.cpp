#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;


int main(){
    int T;
    cout << "Enter the Number of Testcase\n";
    cin >> T;
    while(T--){
        int size;
        cout <<"Enter the size of array: ";cin>>size;
        vector<int> arr(size);
        for(int i=0; i<size; i++){
            cin >> arr[i];
        };
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i] == arr[j]){
                    arr.erase(arr.begin() + j);
                }else{
                    j++;
                }
            };
        };
        for(int i=0; i<arr.size(); i++){
            cout << arr[i]<< " ";
        };
    }
    return 0;
};