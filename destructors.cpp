#include<iostream>
using namespace std;


int count = 0;
class Number{

    public:

    Number(){
        count++;
        cout<<"The constructor is called for the object "<<count<<endl;
    }

    ~Number(){
        cout<<"The distructor is called for the object "<<count<<endl;
        count--;
    }


    
};

int main(){

    cout<<"WE have enterd the main function"<<endl;
    cout<<"We are creating the first object n1"<<endl;
    Number n1;
    {
        cout<<"we are enterint the bolck"<<endl;
        cout<<"We are making twpo new objects n2 and n3"<<endl;
        Number n2 , n3;

        cout<<"We are leavint the block"<<endl; 
    }
      
      cout<<"We are again at the main function"<<endl;


    return 0;
}