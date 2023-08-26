
//Nesting of members of functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void chk_binary();
    void ones_comp();
    void display();
};
void binary ::read()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "The number is not binary" << endl;
            exit(0);
        }
    }
}

void binary ::ones_comp(void)
{

    chk_binary(); //nesting of chk_binary function in ones_comp functio we can even make it it a private class so that no outsider can himself run it

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    // b.chk_binary();
    b.display();
    b.ones_comp();
    b.display();
    return 0;
}