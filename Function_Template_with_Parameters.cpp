#include <iostream>
using namespace std;

// template <class T1, class T2>

// float AverageCal(T1 a, T2 b)
// {

//     float avg = (a + b) / 2;
//     return avg;
// }

// int main()
// {

//     float a;
//     a = AverageCal(3, 3.14);
//     cout << "The average value of the following numbers is " << a << endl;

//     return 0;
// }


// Swapping numbers using template

template <class T>

void swap (T &a ,T &b){

    T temp = a;
    a = b;
    b = temp;
    cout<<"The value after swapping of a = "<<a<<"and the value of b = "<<b<<endl;
}

int main(){

    swap( 3, 4);


    return 0; 
}