#include <iostream>
using namespace std;

// Forward declaration
class complex;
class Calculator
{

public:
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;

    //Either declare each function as the friend or
    // friend int Calculator ::sumRealComplex(complex, complex);
    // friend int Calculator ::sumCompComplex(complex, complex);

    //Declare the entire class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(3, 6);
    o1.printNumber();

    o2.setNumber(7, 9);
    o2.printNumber();

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of the complex number is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of real part of the complex number is " << resc << endl;

    return 0;
}