#include<iostream>
using namespace std;

class Complex{

    int a , b;
    
    public:
    
    Complex(int , int); 

    friend Complex addComplex (Complex o1 , Complex o2);

    void printData(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
Complex :: Complex(int x , int y){
    a=x;
    b= y;
    cout<<"This is a default constructor as it takes no parameters"<<endl;
}



int main(){

    int sum;
    //IMPLICT CALL
    Complex a(5,7);
    a.printData();


    //Expilict Call
    Complex b = Complex(6, 7);
    b.printData();

   



    return 0;
}