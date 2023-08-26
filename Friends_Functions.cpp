#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
    void setNumber(int n1 , int n2){
        a=n1;
        b=n2;
    }

    friend complex sumComplex(complex o1, complex o2);
    void printData(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}
 int main(){
     complex c1 , c2 , sum;

     c1.setNumber(3,5);
     c1.printData();

     c2.setNumber(6 , 9);
     c2.printData();

     sum = sumComplex(c1 , c2);
     sum.printData();

     return 0;
 }

 //Properties of friend function
 /*
1. Not in the scope of class-----> sumCopmlex is not the par of the class of complex just allowed the permission to use its data.
2. Since it is not in the scope of the class thus canniot be called from the object of the class
            i.e class d1
                  d1.sumComplex is invalid
3. Can be invoked without the hepl of any object
4. Usually contains objects as arguments.
5. Can be declared inside the public as well as private part of the class.
6. It cannot the acess the the members directly by their names and need object_name.member_name to acess any member.                  















 */