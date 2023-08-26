#include <iostream>
using namespace std;
class Number
{

    int a;

public:
    Number()
    {
        a = 0;
    };
    Number(int num)
    {

        a = num;
    }

    void display()
    {

        cout << "The value of variable is " << a << endl;
    }

    Number(Number &obj)
    {
        cout << "Copy constructor is called !!!! " << endl;
        a = obj.a;
    }
};

int main()
{

    Number x, y, z(89);
    x.display();
    y.display();
    z.display();

    Number z1(x);
    z1.display();

    // Important thing is that the compiler always make a default copy constructor , if there is no copy constructor then compiler also gives its
    // Thus suppose you commentout the copy constructor part and then run the program then also it will run.
    // i.e. if

    // Number(Number &obj){
    // cout<<"Copy constructor is called !!!! "<<endl;
    // a = obj.a;}

    // Number z1(x);
    // z1.display();      Then also the program runs.

    // Also note that if theier is z2 such that
    // z2 = z it will  not work       but
    Number z2 = z;
    z2.display(); // This will work

    return 0;
}
