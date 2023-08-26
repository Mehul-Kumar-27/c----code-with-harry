#include<iostream>
using namespace std;


//Overloading means to make one function name and do multiple task with it 
//we made one volume function and calculated the value pof volume of both cylinder and cuboid.

double volume(double r, double h){
    return 3.14*r*r*h;
}
double volume(double l, double h, double b){
    return l*b*h;
}

int main(){
   
    cout<<"The volume of cylinder of radius 6.78 and height 5.987 is  "<<volume(6.78,5.987)<<endl;
    cout<<"The volume of cuboid of lenght 6.78, height 5.987 and breadth 9.89 is  "<<volume(6.78,5.987,9.89)<<endl;


return 0;
}

