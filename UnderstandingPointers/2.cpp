// Coding Questions for Pointer

#include <iostream>
#include <string>
using namespace std;

void display(int *x)
{
    cout << "Here is the Pointer to Function's Function to display a simple line which you are reading.";
};

int main()
{

    // Program to swap two numbers using pointer

    // int firstnumber = 10;
    // int secondnumber = 50;
    // int* temp;
    // *temp = secondnumber;
    // secondnumber = firstnumber;
    // firstnumber = *temp;

    // cout << "First Number is : "<< firstnumber << endl;
    // cout << "second Number is : "<< secondnumber << endl;

    // Input pointer as a argument and modifies the value of the variable

    // int x= 10;
    // int* ptr;
    // ptr = &x;
    // *ptr = 100;
    // cout << x << endl;

    // Program to find the largest element in array using a pointer;

    // int arr[10] = {10,20,30,4000,50,600,70,80,100,90};

    // int *ptr;
    // *ptr = arr[0];
    // for(int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
    //     if(*ptr < arr[i]){
    //         *ptr = arr[i];
    //     };
    // };

    // cout << *ptr << endl;

    // Program to reverse an array using pointer arithmetic

    // int array[10] = {1,2,3,4,5,6,7,8,9,10};

    // int arraysize = sizeof(array)/sizeof(array[0]);

    // int* start = array;
    // int* end = array + (arraysize-1);

    // while(start < end){

    //     int temp = *start;
    //     *start = *end;
    //     *end = temp;

    //     start++;
    //     end--;

    // }

    // for(int i=0; i < arraysize; i++){
    //     cout << array[i] << ' ';
    // }

    // Write a program to count the number of vowels in a string using pointers

    // char countsvowels[] = "Vishesh is a Good Boy but Gunnu is Bad Girl";
    // int len= sizeof(countsvowels)/sizeof(countsvowels[0]);

    // char *ptr = countsvowels;

    // int count =0;

    // for(int i=0; i<len; i++){

    //     if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u'){
    //         count++;
    //     };

    //     *ptr++;

    // }

    // cout << count << endl;

    // Function to return the sum of two number using a pointer

    // int a = 10;
    // int b = 20;

    // int *result;
    // *result = a+b;
    // cout << *result;

    // Program that dynamically allocated memory for an array , input values and calculates the average ..

    // int size;
    // size = 5;
    // int* arr = new int[size];

    // for(int i=0; i<5; i++){

    //     arr[i] = i+10;

    // };
    // int sum=0;

    // for(int i=0; i < 5; i++){

    //     sum += arr[i];

    // };

    // int average = sum/5;
    // cout << average << endl;

    // A Program that demonstrates the memory leak and then correct it !

    // int* num = new int(6);
    // cout << *num << endl;

    // delete num;
    // num = nullptr;
    // cout << num;

    // A Program That creates a pointer to a structure and accesses its members

    // struct Person{
    //     string name;
    //     int age;
    // };
    // Person p1;
    // p1.name = "vishesh";
    // p1.age=19;
    // Person* ptr = &p1;
    // cout << ptr -> name << endl;
    // cout << ptr -> age << endl;

    // A pointer to a function and call the function using pointer

    // int* ptr;
    // int a = 10;
    // ptr = &a;
    // display(&a);

    // int* matrix = new int[5 * 5];

    // // int** a = new int*[5];

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<5; j++){

    //         matrix[i * 5 + j] = i * 5 + j + 1;

    //     }
    // };

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<5; j++){

    //     cout << matrix[i * 5 + j]<< ' ';
    //     }
    // }

    // delete[] matrix;

    // Program that sorts an array using pointers and the bubble sort algorithm;

    // int arr[10] = {1, 3, 2, 4, 6, 5, 7, 9, 8, 10};

    // int sizeofarr = sizeof(arr)/sizeof(arr[0]);

    // for(int i=0; i<sizeofarr; i++){

    //     for(int j=0; j<sizeofarr; j++){
    //         int* temp;
    //         if(arr[j] > arr[j+1]){
    //             *temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = *temp;
    //         }
    //     }
    // }

    // for(int i=0; i<sizeofarr; i++){
    //     cout << arr[i] << ' ';
    // }

    // A Pointer array to store names of students and print them ....

    // string name1="Vishesh";
    // string name2 = "Vasu";

    // string* ptrtoarr[] = {&name1, &name2};
    // int sizearr = sizeof(ptrtoarr)/sizeof(ptrtoarr[0]);

    // for(int i=0; i<sizearr; i++){
    //     cout << *ptrtoarr[i] << " ";
    // }

    // A Program to copy a string into another string using pointers

    // string str1 = "This is a string";
    // string* ptr;
    // ptr = &str1;
    // string str2;
    // str2 = *ptr;
    // cout << str2;

    // The use of pointer to pointer to accessing and modfying the data

    // int* ptr1;
    // int** ptr2;
    // int data1 = 10;
    // int data2 = 20;
    // ptr1=&data1;
    // ptr2 = &ptr1;

    // **ptr2 += 100;

    // cout << **ptr2;

    // A function that accepts an array and its size using pointer notation

    // int* size;
    // int a = 10;
    // size = &a;

    // int* arr = new int[*size];

    // for(int i=0; i < *size; i++){
    //     arr[i] = i*2;
    // }

    // for(int i=0; i<*size; i++){
    //     cout << arr[i] << " ";
    // }

    // A Function that reverses a string using pointer manipulation

    // string text = "reverse";

    // int lenstring = text.length();

    // char *start = &text[0];
    // char *end = &text[lenstring - 1];

    // while (start < end)
    // {
    //     int temp = *start;
    //     *start = *end;
    //     *end = temp;

    //     start++;
    //     end--;
    // }

    // cout << text;






    // Pointer arithmetic using integer arrays

    // int arr[8] ={10,9,8,7,6,5,7,8};
    // int sizearr = sizeof(arr)/sizeof(arr[0]);

    // int* el;
    // el = arr;

    // for(int i=0; i<sizearr; i++){
    //     cout << *(el + i) << " ";
    // }



    



    // A Program to print the address of each element in an array using a pointer ..

    // int arr[8] ={10,9,8,7,6,5,7,8};
    // int sizearr = sizeof(arr)/sizeof(arr[0]);


    // int* address;

    // address = arr;

    // for(int i=0; i<sizearr; i++){

    //     cout << (address + i) << endl;

    // }






    // Use a Pointer to traverse 2D array



    // int arr[3][3] = {
    //     {1,2,3},
    //     {11,22,33},
    //     {111,222,333}

    // };

    // int sizearr = sizeof(arr)/sizeof(arr[0][0]);

    // int* ptr;

    // ptr = *arr;


    // for(int i=0; i<sizearr; i++){
    //     cout << *(ptr+i)<< endl;
    // }





    return 0;
}