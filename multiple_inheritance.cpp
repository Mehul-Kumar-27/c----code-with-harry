#include <iostream>
using namespace std;

// Synatx for thr multiple inheritance.
//  class DerivedC: visibility-mode base1, visibility-mode base2
//  {
//       Class body of class "DerivedC"
//  };

class Base1
{

protected:
    int Base1;

public:
    void set_base1(int a)
    {

        Base1 = a;
    }
};

class Base2
{

protected:
    int Base2;

public:
    void set_base2(int a)
    {

        Base2 = a;
    }
};

class Base3
{
protected:
    int Base3;

public:
    void set_base3(int a)
    {
        Base3 = a;
    }
};

class Derived : public Base1 , public Base2 , public Base3{

    public:

    void show(){
         cout<<"The value of Base 1 is"<<Base1<<endl;
         cout<<"The value of Base 2 is"<<Base2<<endl;
         cout<<"The value of Base 3 is"<<Base3<<endl;
         cout<<"The sum of the classes are"<<Base1+Base2+Base3<<endl;
    }

};

/*

The in herited derived class will have the following specification

Data Members

int Base1
int Base2 ------------------->> Protected Members of the derived class
int Base3
 
Function Mebers

void set_base1
void set_base2  --------------------------->> The public functions of the derived class
void set_base3
void show




*/

int main(){

    Derived car;
    car.set_base1(89);
    car.set_base2(8976);
    car.set_base3(23);
    car.show();

    return 0;
}


/* 
        Ambiguity Resolution in C++

        class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet();
    }
};


class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};




*/