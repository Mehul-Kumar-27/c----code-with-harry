#include<iostream>
using namespace std;

template< class T1 = int , class T2 = char, class T3 = float>

class Myclass{

    public:

    T1 a;
    T2 b;
    T3 c;

    Myclass(T1 x ,T2 y , T3 z){
        a = x;
        b = y;
        c = z;
    }

    void displayData(){

        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;

    }
};

int main(){

    // Using Default parameters
    Myclass<>m(3 , 'd', 3.14);
    m.displayData();

    // Not using the default template we have the previous normal synatx
    Myclass<float , char , int>g(3.14 , 'm', 4);
    g.displayData();


    return 0;
}
