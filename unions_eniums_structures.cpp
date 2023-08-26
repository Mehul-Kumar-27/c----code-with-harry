#include<iostream>

using namespace std;



typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}emp;

union money{

    int rice;
    char car;
    float rupees;
};


int main(){

    enum Meal{ breakfast, lunch, dinner};
      Meal m2 = lunch;
      cout<<m2<<endl;

     cout<<breakfast<<endl;
     cout<<lunch    <<endl;
     cout<<dinner   <<endl;

     union money m1;
     m1.rice = 34;
     m1.car  ='c';
     cout<<m1.car;


    emp harry;
    harry.eId = 1;
    harry.favChar = 'd';
    harry.salary = 230000;          
            cout<<endl;
            cout<<"The value of harry.salary "  <<harry.salary <<endl;
            cout<<"The value of harry.eId "     <<harry.eId    <<endl;
            cout<<"The value of harry.favChar " <<harry.favChar<<endl;

            


















    return 0;
}