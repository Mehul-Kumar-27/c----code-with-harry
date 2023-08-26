#include<iostream>

using namespace std;

// int sum(int a, int b){
//    int c = a+b;
//    return c;
// }

//Function Prototype---> 
//type function-name (argument) 
int sum(int a, int b);

void g();

int main(){

    int num1, num2;

    cout<<"Enter the value of 1 number"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    cout<<"The value osf sum is "<<sum(num1, num2)<<endl;
    g();

       return 0;
}


int sum(int a, int b)
   {int c = a+b;
   return c;
}
void g(){
    cout<<"Hello";
}
    