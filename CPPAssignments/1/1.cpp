#include <iostream>
#include <string>
using namespace std;



// int main(){
//     // string name;
//     // cout << "Name: ";
//     // cin >> name;
//     // int age;
//     // cout << "Age: ";
//     // cin >> age;
//     // int rollnumber;
//     // cout <<"Roll Number: ";
//     // cin >> rollnumber;
//     // return 0;
// };



// int main(){
//     string movie;
//     int releasedate;
//     cout << "Your favourite movie is: ";cin>>movie;
//     cout <<"It was released in: ";cin >> releasedate;
//     return 0;
// };





int main(){
    int year;
    cout << "Enter the year : ";cin >> year;

    if(year % 4 == 0 && year % 100 !=0 && year%40  == 0){
        cout << "It is a leap year \n";
    } else{
        cout << "It is not a leap year\n";
    }

    return 0;
}