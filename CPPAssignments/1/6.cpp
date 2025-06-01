#include <iostream>
#include <string>
using namespace std;


// int main(){
//     string a = "Hello World";
//     for(int i=a.length();i>=0; i--){
//         cout << a[i];
//     };
//     return 0;
// }

// int main(){
//     string s = "racecar";
//     string revs;
//     for(int i=s.length()-1; i>=0; i--){
//         revs += s[i];
//     };
//     if(s == revs){
//         cout << "Yes, it is palindrome"<<endl;
//     } else{
//         cout << "No"<<endl;
//     }
//     return 0;
// }




// int main(){
//     string s = "OpenAi ChatGpt";
//     string vowel = "aeiouAEIOU";
//     int vowelcount=0;
//     int consonant = 0;
//     for(int i=0; i<s.length(); i++){
//         bool isvowel = false;
//         if(isalpha(s[i])){
//         for(int j=0; j<vowel.length();j++){
//             if(s[i] == vowel[j]){
//                 isvowel=true;
//                 break;
//             };
//         };
//         if(isvowel){
//             vowelcount++;
//         } else{
//             consonant++;
//         };
//     };
//     };
//     cout << "Vowels: "<<vowelcount<<endl;
//     cout << "Consonants: "<<consonant<<endl;
//     return 0;
// }


// int main(){
//     string s;
//     cout << "Enter the string\n";
//     cin >> s;
//     int finalwordcount=0;
//     int frequentidx;
//     for(int i=0;i<s.length(); i++){
//         int wordcount=0;
//         for(int j=0; j<s.length(); j++){
//             if(s[i] == s[j]){
//                 wordcount++;
//             };
//         };
//         if(wordcount > finalwordcount){
//             finalwordcount = wordcount;
//             frequentidx = i;
//         };
//     };
//     cout << "Most frequent character: "<<s[frequentidx]<<endl;
//     return 0;
// };




// int main(){
//     string s;
//     cout << "Enter the string\n";
//     cin>>s;
//     string s2 ="";
//     for(int i=0; i<s.length(); i++){
//         bool alreadyexists=false;
//         for(int j=0; j<s2.length(); j++){
//             if(s[i] == s2[j]){
//                 alreadyexists = true;
//                 break;
//             };
//         };
//         if(!alreadyexists){
//             s2 += s[i];
//         }
//     };
//     cout << s2;
// }





// int main(){
//     string s;
//     cout << "Enter the string\n";
//     cin >>s;
//     for(int i=0; i<s.length(); i++){
//         bool isrepeat = false;
//         for(int j=0; j<s.length(); j++){
//             if(s[i] == s[j] && i!=j){
//                 isrepeat = true;
//                 break;
//             };
//     };
//     if(!isrepeat){
//         cout <<"First non-repeating character: "<<s[i];
//         return 0;
//     }
//     };
//     return 0;
// }




// int main(){
//     string s;
//     cout <<"Enter a string\n";
//     getline(cin, s);
//     bool capitalizenext = true;
//     for(int i=0; i<s.length(); i++){
//         char ch = s[i];
//         if(ch >='a' && ch<='z'){
//             if(capitalizenext){
//                 s[i] = ch - 32;
//                 capitalizenext = false;
//             } 
//         }else if(ch >='A' && ch<= 'Z'){
//                 if(!capitalizenext){
//                     s[i] = ch + 32;
//                 } else{
//                     capitalizenext = false;
//                 }
//             } else{
//                 capitalizenext = true;
//             }
//     }
//     cout << s;
//     return 0;
// }



// int main(){
//     string s1,s2;
//     cin >> s1;
//     cin >> s2;
//     bool isanagrams=true;
//     if(s1.length() != s2.length()){
//         isanagrams = false;
//     } else{
//         for(int i=0; i<s1.length(); i++){
//             int count1 = 0; int count2=0;
//             for(int j=0; j<s1.length(); j++){
//                 if(s1[i] == s1[j]){
//                     count1++;
//                 };
//                 if(s1[i] == s2[j]){
//                     count2++;
//                 };
//             }
//             if(count1 != count2){
//                 isanagrams = false;
//                 break;
//             };
//         };
//     }
//     if(isanagrams){
//         cout << "Yes, they are anagrams\n";
//     } else{
//         cout << "No they are not anagrams\n";
//     }
//     return 0;
// };



// int main(){
//     string s;
//     cout << "Enter the string\n";
//     getline(cin, s);
//     string num = "1234567890";
//     bool isdigit = true;
//     for(int i=0; i<s.length(); i++){
//         bool found = false;
//         for(int j=0; j<num.length(); j++){
//             if(s[i] == num[j]){
//                 found = true;
//                 break;
//             };
//         };
//         if(!found){
//             isdigit = false;
//             break;
//         };
//     };
//     if(isdigit){
//         cout << "Yes, it contains only digits";
//     }else{
//         cout << "No";
//     }
//     return 0;
// };




// int main(){
//     string s;
//     cout <<"Enter a string \n";
//     getline(cin,s);
//     string target;
//     cout << "Enter the target\n";
//     getline(cin, target);
//     string replace;
//     cout << "Enter replace\n";
//     getline(cin, replace);
//     string word = "";
//     string result = "";
//     s += " ";
//     for(int i=0; i<s.length(); i++){
//         if(s[i] != ' '){
//             word+= s[i];
//         } else{
//             if(word == target){
//                 result += replace;
//             } else{
//                 result += word;
//             };
//             result += ' ';
//             word = "";
//         }
//     };
//     cout << "Modified sentence\n"<< result<<endl;
//     return 0;
// };



// int main(){
//     string s;
//     getline(cin, s);
//     string word = "",result = "";
//     s+=' ';
//     for(int i=0; i<s.length(); i++){
//         if(s[i] != ' '){
//             word+= s[i];
//         } else{
//             string reversed="";
//             for(int j=word.length() -1; j>=0; j--){
//                 reversed += word[j];
//             };
//             result += reversed + ' ';
//             word = "";
//         };
//     };
//     cout << result << endl;
// return 0;
// }




// int main(){
//     string s;
//     cout << "Enter the sentence\n";
//     getline(cin, s);
//     s+= ' ';
//     string word = "", longest="";
//     int maxlen=0;
//     for(int i=0; i<s.length(); i++){
//         if(s[i] != ' '){
//             word += s[i];
//         } else{
//             if(word.length() > maxlen){
//                 maxlen = word.length();
//                 longest = word;
//             }
//             word = "";
//         }
//     };
//     cout << longest<<endl;
//     return 0;
// };








// int main(){
//     string s;
//     getline(cin, s);
//     int count[256] = {0};
//     for(int i=0; i<s.length(); i++){
//         count[(int)s[i]]++;
//     };
//     for(int i=0; i<256; i++){
//         if(count[i] > 0){
//             cout << (char)i<< " "<< count[i]<<endl;
//         }
//     };
//     return 0;
// };




// int main(){
//     string s1, s2;
//     getline(cin,s1);
//     getline(cin, s2);
//     if(s1.length() != s2.length()){
//         cout << "NO"<<endl;
//         return 0;
//     };
//     string temp = s2+s2;
//     bool isrotation = false;
//     int len = s1.length();
//     for(int i=0; i<temp.length() - len; i++){
//         bool match = true;
//         for(int j=0; j<len; j++){
//             if(temp[i+j] != s1[j]){
//                 match = false;
//                 break;
//             };
//         };
//         if(match){
//             isrotation = true;
//             break;
//         }
//     };
//     if(isrotation){
//         cout << "Yes";
//     }else{
//         cout << "No";
//     }
// return 0;
// }



// int main(){
//     string s;
//     getline(cin , s);
//     for(int i=0; i<s.length(); i++){
//         for(int j=i; j<s.length(); j++){
//             string sub = "";
//             for(int k=i; k<=j; k++){
//                 sub += s[k];
//             }
//             cout << sub<< endl;
//         };
//     }
// }