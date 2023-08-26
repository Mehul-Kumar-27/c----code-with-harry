#include<iostream>

using namespace std;

int main(){
//pointer arithematic
// address new = address current + i*(size of data type)

//POINTERS AND ARRAYS

int marks[]{23,45,78,100};

int* p= marks;

cout<<*p++<<endl;
cout<<*(p)<<endl;
cout<<*(++p)<<endl;

               cout<<"The value of marks[0] is "<<*(p)<<endl;
               cout<<"The value of marks[1] is "<<*(p+1)<<endl;
               cout<<"The value of marks[2] is "<<*(p+2)<<endl;
               cout<<"The value of marks[3] is "<<*(p+3)<<endl;                                         























    return 0;
}