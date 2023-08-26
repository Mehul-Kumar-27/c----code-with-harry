#include <iostream>
using namespace std;

class Base
{

public:
    int var_base;
    void display()
    {
        cout << "The value of the base class variable is equal to " << var_base << endl;
    }
};

class Derived : public Base
{

public:
    int var_Derived;
    void display();
    void display()
    {
        
        cout << "The value of ther bas class variable is eqaul to " << var_base << endl;
        cout << "The value of the derived class variable is equal to " << var_Derived << endl;
    }
};

int main(){

    Base * pointer_of_base;
    Base obj_base;
    pointer_of_base->var_base = 23;
    pointer_of_base->display();

    Derived obj_derived;
    pointer_of_base = & obj_derived;
    
    Derived * pointer_of_derived;
    pointer_of_derived = & obj_derived;
    pointer_of_derived->var_Derived = 45;
    pointer_of_derived->var_base = 32;
    pointer_of_derived->display();












    return 0;
}