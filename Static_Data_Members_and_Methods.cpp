#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }

    void getData()
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount()
    {
        cout << "The vale of count is " <<
         count << endl;
    }
    };

    int Employee ::count = 1000;
    int main()
    {
        Employee mehul, harry, ram;
        mehul.setData();
        mehul.getData();
        Employee::getCount();

        harry.setData();
        harry.getData();
        Employee::getCount();

        ram.setData();
        ram.getData();
        Employee::getCount();

        return 0;
    }
