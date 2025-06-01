#include <iostream>
#include <cmath>
#include <string>
using namespace std;



// int main(){
//     int N;
//     cout << "Enter the value of N : ";cin>>N;
//     int sum =0;
//     for(int i=0; i<=N; i++){
//         sum+=i;
//     };
//     cout << "Sum of "<<N<<" integers is : "<< sum<<endl;

//     return 0;
// };



// int main(){
//     int fact;
//     cout << "Enter the number to calculate its factorial : "; cin >> fact;
//     int factorial =1;
//     for(int i=1; i<=fact; i++){
//         factorial *=i;
//     };
//     cout << "The factorial of "<< fact << " is : "<<factorial << endl;
//     return 0;
// }






// int main(){
//     int integer;
//     cout << "Enter the integer : "; cin >> integer;

//     int revnum =0;

//     while(integer !=0){
//         revnum = (revnum * 10) + integer % 10;
//         integer = integer/10;
//     };


//     cout << "The reversed number is : "<< revnum<< endl;


//     return 0;

// }






// int main(){
//     int number;
//     cout <<"Enter the Number : "; cin >>number;
//     int count =0;
//     int digits=0;
//     if(number == 0){
//         count = 1;
//     } else{
//     while(number!=0){
//         digits = number%10;
//         number = number/10;
//         count+=1;
//     };
// };
//     cout << "Number of digits in the number is : "<< count <<endl;
//     return 0;
// }



// int main(){

//     int number;
//     cout << "Enter the number : "; cin >>number;

//     if(number <=1){
//         cout << "Invalid or Non Prime Number\n";
//     } else {
//         bool isPrime = true;

//         for(int i=2; i<=sqrt(number); i++){
//             if(number % i ==0){
//                 isPrime=false;
//                 break;
//             }
//         }

//         if(isPrime){
//             cout << "It is a Prime Number\n";
//         } else{
//             cout << "It is not a Prime Number\n";
//         }
//     }
//     return 0;
// };




// int main(){
//     int number;
//     cout << "Enter a Number : ";cin>>number;
//     int sum =0;
//     int digits =0;
//     while(number >0){
//         digits = number%10;
//         sum+=digits;
//         number= number/10;
//     };
//     cout << "The sum of digits of the number is : "<<sum;
//     return 0;
// };





// int main(){
//     int num1, num2;
//     cout << "Enter number 1 : ";cin >> num1;
//     cout << "Enter number 2 : "; cin >>num2;
//     if(num1 > num2){
//         for(int i=num1; i>0; --i){
//             if(num1 % i == 0&& num2 % i == 0){
//                 cout << "The GCD of both the Numbers is : "<<i<<endl;
//                 break;
//             };
//         }
//     } else if(num2 > num1){
//         for(int i=num2; i>0; --i){
//             if(num1 % i == 0&& num2 % i == 0){
//                 cout << "The GCD of both the Numbers is : "<<i<<endl;
//                 break;
//             };
//         }
//     } else if(num1 == num2){
//         cout << "The GCD of both the number is : "<< num1 << endl;
//     }
//     return 0;
// };






// int main(){
//     long long int N;
//     cout << "Enter the Number : ";cin>>N;
//     long long int a =0, b=1;

//     while(a <= N){
//         cout << a << " ";
//         long long int next = a+b;
//         a = b;
//         b=next;
//     };
//     return 0;
// }








// int main(){
//     int N;
//     cout << "Enter a Number : "; cin>>N;
//     int original =N;
//     int revnum = 0;
//     while(N >0){
//         revnum = revnum*10 + (N%10);
//         N = N/10;
//     };
//     if(original == revnum){
//         cout << "It is a Palindrome number\n";
//     } else{
//         cout << "It is not a Palindrome number\n";
//     }
//     return 0;
// };




// int main(){
//     string s;
//     cout << "Enter a String : ";
//     getline(cin, s);
//     int vowelcount =0;
//     string vowels[] = {"a","e","i","o","u", "A","E","I","O","U"};
//     int vowelsize= sizeof(vowels)/ sizeof(vowels[0]);
//     for(int i=0; i<s.size(); i++){
//         for(int j=0; j<vowelsize; j++){
//             if(string(1, s[i]) == vowels[j]){
//                 vowelcount++;
//             }
//         };
//     };
//     cout << "Number of vowels in the string is : "<< vowelcount << endl;
//     return 0;
// }



// int main(){
//     int N;
//     cout << "Enter the Number : ";cin>>N;
//     int digit =0;
//     int largestnum =0;
//     while(N != 0){
//         digit = N%10;
//         if(largestnum < digit){
//             largestnum = digit;
//         };
//         N = N/10;
//     };
//     cout << "The largest digit is : "<< largestnum<<endl;
//     return 0;
// };






int main(){
    int N;
    cout << "Enter a number : "; cin >>N;

    int finaloriginalnum = N;
    int originalnum = N;
    int numdigits =0;
    int count =0;
    int sum =0;

    if(N == 0){
        count = 1;
    }else{
    while(N!=0){
        numdigits = N%10;
        count +=1;
        N = N/10;
    };
    numdigits = 0;
};

while(originalnum !=0){
    numdigits = originalnum%10;
    originalnum = originalnum/10;
    sum += pow(numdigits, count);
};

if(finaloriginalnum ==sum){
    cout << "It is an Armstrong Number\n";
}else{
    cout << "It is not an Armstrong Number\n";
};
    return 0;
}