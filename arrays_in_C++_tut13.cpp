#include <iostream>
using namespace std;

int main()
{
    // Arrays example used to store value of group data

    int marks[] = {23, 45, 65, 78};
    cout << "The valve of marks of 1 student is" << marks[0] << endl;
    cout << "The valve of marks of 2 student is" << marks[1] << endl;
    cout << "The valve of marks of 3 student is" << marks[2] << endl;
    cout << "The valve of marks of 4 student is" << marks[3] << endl
         << endl;

    cout << "This is written by for loop" << endl
         << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Marks scored by student " << i << " = " << marks[i] << endl
             << endl;
    }

    cout << "This is written by while loop" << endl
         << endl;
    ;
    int b = 0;
    while (b < 4)
    {

        cout << "Marks scored by student" << b << " =" << marks[b] << endl;
        b++;
    }
    cout << endl;
    cout << "This is printed by using do-while loop" << endl;
    int p = 0;
    do
    {
        cout << "The marks scored by student " << p << "=" << marks[p] << endl;
        p++;

    } while (p < 4);

    return 0;
}