#include <iostream>
using namespace std;

class Student
{

protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student ::set_roll_number(int r)
{

    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number of the student is  " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2);
    void get_marks();
};

void Exam ::set_marks(float m1, float m2)
{

    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{

    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

class Result : public Exam
{

    float percentage;

public:
    void display_result()
    {

        cout << "The percentage obtained is " << (maths + physics) / 2 << endl;
    }
};

int main()
{

    Result ram;

    ram.set_roll_number(1);
    ram.get_roll_number();
    ram.set_marks(87.98, 98.0);
    ram.get_marks();
    ram.display_result();

    return 0;
}