#include<iostream>
using namespace std;

template<class T>

class vector{

    public:

    T data;

    vector(T a){
        data = a;
    }

    void display();
};

template<class T>

void vector<T> :: display(){
        cout<<data<<endl;
}

template<class T>

void func1(T b){
    cout<<"The value from the templaized template is equal to "<<b<<endl;
}

int main(){

    vector<int>v(5);
    v.display();

    func1('c');



    return 0;
}