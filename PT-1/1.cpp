#include <iostream>
#include <vector>
using namespace std;



// int main(){
//     int totalseats = 100;

//     int T;
//     cout << "Input\n";
//     cin>>T;
//     int personseat;

//     while(T--){
//         cout << "Enter the seat number"<<endl;
//         cin >> personseat;

//         if(personseat <=50 && personseat>=0){
//             cout << "Left"<<endl;
//         } else if(personseat > 50 && personseat <=100){
//             cout << "Right"<<endl;
//         } else{
//             cout << "Wrong input\n";
//         };

//     };
// return 0;
// }





int main(){
    int T;
    cout << "Enter the Number of Passengers"<<endl;
    cin >> T;

    vector<int>seats(T);

    for(int i=0; i<T; i++){
        cout << "Enter the Seat Number "<<endl;
        cin >> seats[i];
    };

    cout <<"Output\n";

    for(int i=0; i<T; i++){

        if(seats[i]>=0 && seats[i]<=50){
            cout << "Left"<<endl;
        } else if(seats[i]>50 && seats[i]<=100){
            cout << "Right"<<endl;
        } else{
            cout << "Invalid Seat Number\n";
        };
    };


    return 0;

}