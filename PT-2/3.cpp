#include <iostream>
#include <string>
using namespace std;



int main(){


    int T;
    cout << "Enter the number of testcases : ";cin >> T;

    while(T--){

        int N;
        cout << "Enter the number of pairs of strings : ";
        cin >> N;

        string s1;
        cout << "Enter the first string : "; cin>>s1;
        string s2;
        cout << "Enter the second string : "; cin>>s2;

        bool isanagram = true;
        if(s1.length() != s2.length()){
            isanagram = false;
            cout << "Length does not match : ";
            return false;
        } else {
            int freq[26] = {0};
            for(int i=0; i<s1.length(); i++){
                freq[s1[i] - 'a']++;
                freq[s2[i] - 'a']--;
            };
            for(int i=0; i<26; i++){
                if(freq[i] !=0){
                    isanagram = false;
                };
            };
        };

        if(isanagram){
            cout << "Anagrams"<<endl;
        } else{
            cout << "Not Anagrams"<<endl;
        };
    
    };
    return 0;
};