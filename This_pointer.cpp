#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

class B{

    int b;

    public:

    B & setB(int b){
        this->b = b;
        return *this;
    } 

    void getB(){

        cout<<"The value of B is equal to "<<b<<endl;
    }
};


int main(){
    A a;
    a.setData(4);
    a.getData();
    






    B c;
    c.setB(9).getB();

    return 0;
}