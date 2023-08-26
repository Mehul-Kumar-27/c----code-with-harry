#include<iostream>
using namespace std;

//This program will not swap the values 

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
    
//     int main(){
//         int a , b;
//         cout<<"The value of a is "<<endl;
//         cin>> a;
//         cout <<"The value of b is "<<endl;
//         cin>> b;
//         swap(a, b);This a and b value is given to swap functions but in the below line it prints the value of a and b present in main function 
//         cout<<"Aftre swapping the value of a is "<<a<<" The value of b is "<<b;
//         return 0;
//     }


//To swap the values we will form pointers and give address to the swap function
//This will swap the values using pointer variables

// void swapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
    
//     int main(){
//         int x , y;
//         cout<<"The value of x is "<<endl;
//         cin>> x;
//         cout <<"The value of y is "<<endl;
//         cin>> y;
//         swapPointer(&x, &y);
//         cout<<"Aftre swapping the value of x is "<<x<<" The value of y is "<<y;
//         return 0;
//     }

//This will swap the values using reference variables which is shown in tut 7
//************************************Reference variable*******************************
//float x = 6
//float & y = x
//cout<<x<<endl;
//cout<<y<<endl;      These both cout will print 6

// void swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
    
//     int main(){
//         int x , y;
//         cout<<"The value of x is "<<endl;
//         cin>> x;
//         cout <<"The value of y is "<<endl;
//         cin>> y;
//         swapReferenceVar(x, y);
//         cout<<"Aftre swapping the value of x is "<<x<<" The value of y is "<<y;
//         return 0;
//     }

//Return by re Reference

int & swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}
    
    int main(){
        int x , y;
        cout<<"The value of x is "<<endl;
        cin>> x;
        cout <<"The value of y is "<<endl;
        cin>> y;
        swapReferenceVar(x, y)=766;
        cout<<"Aftre swapping the value of x is "<<x<<" The value of y is "<<y;
        return 0;
    }