#include<iostream>
using namespace std;


// SYNTAX FOR (FOR LOOP)
//   for(initialisation; condition; updation;)

int main(){

    for (int i = 1; i <= 10 ; i++)
    {
      if(i==5){
        continue;
      }
        cout<<"6*"<<i<<"="<<6*i<<endl;
        
    }

//     /*While loopin C++
//     Syntax:
//     while(condition):
//     {
//       C++ statements;*/
//     // }

//   //  int a=1;
//   //  while (a<=40)
//   //  {
//   //    cout<<a<<endl;
//   //    a++;
//   //  }
//    int i=1;
//    do{

//       if(i==5){
//        continue;
//       }
     
//      cout<<"6*"<<i<<"="<<6*i<<endl;
//      i++;
//     //  if(i==5){
//     //    continue;
//     //  }
     
//    }while(i<=10);

  return 0;  
}
