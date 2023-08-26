#include<iostream>
using namespace std;

class Complex{

    int a , b;
    
    public:
    //Creating a Constructor
    //Constructor is a special member function with tghe same name as that of class.
    //It is use to initiallise the the objects of its class.
    //It is automatically invoked(called) whenever an object is created.
    //They cannot return values and do not have return types.
    //It can have default arguments .
    //We cannot refer to their address.
    Complex(void); //---------------> This is a defalt constructor
    void printData(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

Complex :: Complex(void){
    a=10;
    b= 1;
    cout<<"This is a default constructor as it takes no parameters"<<endl;
}
    
int main(){

    Complex c;
    c.printData();

 return 0;
}
