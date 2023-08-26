#include<iostream>

using namespace std;

int main(){

    int i = 3;
    int* b = &i;

    // What is a pointer----> A pointer is a data type which holds the addresss of other data types like integers, charachters

    // &----> Address of operator

    cout<<"The address of a is "<<&i<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ------> (Value at) Deference operators
    cout<<"The value at address b is "<<*b<<endl<<endl;
   
   //pointer to pointer

   int** c=&b;
   cout<<"The address of b is "<<&b<<endl;
   cout<<"The address of b is "<<c<<endl;
   cout<<"The value of address of c is "<<*c<<endl;
   cout<<"The value at address of c is "<<**c<<endl;



    return 0;
}