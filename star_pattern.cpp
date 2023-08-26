#include <iostream>
using namespace std;

int main()
{

    int rows;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    

    for (int i = 1; i <= rows; i++)
    {   
        int pattern = 0;
        for (int spaces = 1; spaces <= rows - i; spaces++)
        {
            cout << " ";
        }

        while (pattern != (2 * i) - 1)
        {
            cout << "*";
            pattern++;
        }

        cout << endl;
    }

    return 0;
}