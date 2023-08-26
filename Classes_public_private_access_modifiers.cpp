#include<iostream>
using namespace std;

class Employee
{
    private:
     int a,b,c;
     public:
     int d,e;
     void setData(int a1 , int b1, int c1);//Declaration
    //  {    a= a1;
    //      b=b1;
    //      c=c1;
    // }
     void getData(){
         cout<<"The value of a is "<<a<<endl;
         cout<<"The value of b is "<<b<<endl;
         cout<<"The value of c is "<<c<<endl;
         cout<<"The value of d is "<<d<<endl;
         cout<<"The value of e is "<<e<<endl;
     }

};
//Here we are telling the compiler what to do with the setDta function declare above
//we can tell the compiler what to do with setData above too  but we do it here to make our program clean
void Employee :: setData(int a1 , int b1, int c1){
    a= a1;
    b=b1;
    c=c1;
}
//Now we will make the object of the class(employee) we made above

int main(){
                     Employee mehul;
                     mehul.d=34;
                     mehul.e=56;
                     mehul.setData(1,3,8);
                     mehul.getData();
                     cout<<endl;

                     Employee ram;
                     ram.d=78;
                     ram.e=98;
                     ram.setData(45,76,89);
                     ram.getData();
    return 0;
}