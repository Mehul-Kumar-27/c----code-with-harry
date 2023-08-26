#include<iostream>
using namespace std;

class Compolex{

    int real , imagenary;

    public:

    void getData(int a , int b ){

        real = a;
        imagenary = b;
    }

    void printData(){

        cout<<"The number is "<<real<<"+"<<imagenary<<"i"<<endl;
    }
};

int main(){

// One way to make an object is 
    Compolex c1;
    c1.getData(3, 5);
    c1.printData();

// Using pointer to make objects

    Compolex *ptr1 = new Compolex;
    (*ptr1).getData(3,5);
    (*ptr1).printData();

// Pointer can also be made using the arrow operator

    Compolex *ptr2 = new Compolex;
    ptr2->getData(3 ,5);
    ptr2->printData();

    return 0;
}