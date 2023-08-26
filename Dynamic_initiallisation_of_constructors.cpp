#include <iostream>
using namespace std;

class BankDeposit
{

    float principal;
    float year;
    float intrestRate;
    float ReturnValue;

public:
    BankDeposit(){};
    BankDeposit(float p, float y, float r);
    BankDeposit(float p, float y, int r);

    void showData()
    {
        cout << "The principal value was " << principal << "And the time was " << year << "with the intrest rate" << intrestRate << "Thus the return value is " << ReturnValue << endl;
    }
};

BankDeposit ::BankDeposit(float p, float y, float r)
{
    principal = p;
    year = y;
    intrestRate = r;
    ReturnValue = principal;

    for (float i = 0; i <= y; i++)
    {
        ReturnValue = ReturnValue * (1 + intrestRate);
    }
}

BankDeposit ::BankDeposit(float p, float y, int r)
{
    principal = p;
    year = y;
    intrestRate = float (r)/100;
    ReturnValue = principal;

    for (float i = 0; i <= y; i++)
    {
        ReturnValue = ReturnValue * (1 + intrestRate);
    }
}

int main()
{

    BankDeposit bd1, bd2;

    float p, y, r;
    int R;

    cout << "Enter the value of p , y , r " << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.showData();

    cout << "Enter the value of p , y , R " << endl;
    cin >> p >> y >> R;

    bd2 = BankDeposit(p , y , R);
    bd2.showData();

    return 0;
}