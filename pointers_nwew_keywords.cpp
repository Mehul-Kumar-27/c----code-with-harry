#include<iostream>
using namespace std;

// Revesiting pointers 

int main(){

    int a = 4;
    int* ptr = &a;

    cout<<"The value at a is equal to "<<a<<endl;
    cout<<"The value at a is equal to "<<*(ptr)<<endl;

    cout<<"The address of the value stored at a is "<<&a<<endl;
    cout<<"The address of the value stored at a is "<<ptr<<endl;

    // Pointer to pointer

    int** ptr1 = &ptr;

    cout<<"The address of ptr is equal to "<<ptr1<<endl;
    cout<<"One time time dereferencing ptr1 gives the value "<<*(ptr1)
        <<" which is equal to the address of ptr"<<endl;
    cout<<"Dereferencing twice ptr1 gives the value equal to "<<**(ptr1)
         <<" which is equal to the value of a"<<endl;

        cout<<endl;


         cout<<"The new keyword is used as"<<endl;


//  New Keyword example :

        float* ptr2 = new float (56.09);

        cout<<"The value the ptr2 is equal to "<<*(ptr2);

    cout<<endl;

    cout<<"Example program for pointers array and the use of a “new” keyword with an array is shown below."
        <<endl;

    int* arr = new int[3];
    arr  [0] = 12;
    arr  [1] = 102;  // we can also write this as *(arr+1) = 102;
    arr  [2] = 1;

//    For deleting the array use this
//    delete [] arr;

    cout<<"The value at arr[0] is equal to "<<arr[0]<<endl;
    cout<<"The value at arr[1] is equal to "<<arr[1]/**(arr+1)*/<<endl;
    cout<<"The value at arr[2] is equal to "<<arr[2]<<endl;


    return 0;
}