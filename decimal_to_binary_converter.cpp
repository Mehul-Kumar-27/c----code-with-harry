#include<iostream>
#include<cmath>

using namespace std;

void decimal_to_binary(int n){

    int binary = 0;

    int rem;
    static int  i = 1;

    while (n!=0)
    {
        rem = n%2;
        binary = binary + rem*i;
        i = i*10;
        n = n/2;
    }
    
    cout<<"The binary equivalent of the decimal number "<<n<<" is equal to "<<endl
        <<binary<<endl;

}


int main(){

    int a ;
    cin >> a;

    decimal_to_binary(a);

    return 0;


}