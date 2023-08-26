#include<iostream>
using namespace std;

// int factorial(int n){
//     if (n<=2){
//         return 2;
//     }
//     return n* factorial(n-1);
// }

// int main(){
//     int a;
// cout<<"The value of a is "<<endl;
// cin>>a;
// cout<<"The value of factorial "<<a<<" is "<<factorial(a);

int fib(int n){
    if (n<2) {
        return 1;
    }
    return fib(n-1)+ fib(n-2);
}




int main(){
    int a;
cout<<"The value of a is "<<endl;
cin>>a;
cout<<"The term in fibonic series at position of  "<<a<<" is "<<fib(a);

























    return 0;
}