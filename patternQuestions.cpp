#include <iostream>

using namespace std;

void pattern(int n)
{

    for (int row = 1; row <= 2 * n - 1; row++)
    {
        int totalColumnInRow;
        int spaces;

        if (row <= n)
        {
            totalColumnInRow = (n + 1) - row;
            spaces = n - totalColumnInRow;
        }
        else
        {
            totalColumnInRow = row - (n - 1);
            spaces = n - totalColumnInRow;
        }

       

        for (int sp = 0; sp < spaces; sp++)
        {
            cout << " ";
        }

        for (int col = 0; col < totalColumnInRow; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{

    pattern(4);

    return 0;
}