#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Write a program to sort an arrray using a comparator function pointer



bool compareintegers(const int &a, const int &b){
    return a<b;
};

int main(){
    vector<int>numbers = {1,2,4,3,6,5};

    sort(numbers.begin(), numbers.end(), compareintegers);


    for(int num : numbers){
        cout << num << " ";
    }
    return 0;
}