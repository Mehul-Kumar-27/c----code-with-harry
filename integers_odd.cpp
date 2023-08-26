#include <iostream>
using namespace std;

int main()
{
    int a ;
    int odd_number= 0; 
    int  even_number = 0 ;
    
    cout << "Enter the number of integers you want to enter " << endl;
      cin >> a;

    int integer[a];

    for (int i = 1; i <= a; i++)
    {
        cout << "Enter the value of " << i << " integer "<<endl;
        cin >> integer[i];
    }
    


    for (int i = 1; i <= a; i++)
    {
        if (integer[i] % 2 == 0)
        {
            even_number = even_number + 1;
        }

        else
        {
            odd_number = odd_number+1;
        }
    }


    cout<<"The number of odd numbers = "<<odd_number<<endl;
    cout<<"The number of even number = "<<even_number<<endl;
    return 0;
}
