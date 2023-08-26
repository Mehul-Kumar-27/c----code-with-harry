#include <iostream>
#include <cmath>

using namespace std;

// class Point{
//     int x, y , z;
//     friend Point distanceCalculator(Point o1,Point o2);
//     public:
//     int setPoint(int a, int b , int c){
//         x =a;
//         y =b;
//         z =c;
//         return 0;

//     }

//     void printPoint(){
//         cout<<"The coordinates of points are "<< "(" << x << "," << y << "," << z << ")" << endl;
//     }
// };

// Point distanceCalculator(Point o1,Point o2){
//     double distance;
//     distance = sqrt(pow(((o1.x) - (o2.x)), 2) + pow(((o1.y) - (o2.y)), 2) + pow(((o1.z) - (o2.z)), 2));
//     cout << "The distance between the point is " <<distance<< endl;

// }
// int main()
// {
//     Point p1, p2, disatnce;

//     p1.setPoint(3, 5, 4);
//     p1.printPoint();

//     p2.setPoint(3, 5, 4);
//     p2.printPoint();

//     disatnce = distanceCalculator(p1 ,p2);

//     return 0;
// }
class Point;
class Calculator
{

public:
    float distanceCalculator(Point, Point);
};
class Point
{
    int x, y, z;
    friend class Calculator;

public:
    int setPoint(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
        return 0;
    }

    void printPoint()
    {
        cout << "The coordinates of points are "
             << "(" << x << "," << y << "," << z << ")" << endl;
    }
};
float Calculator ::distanceCalculator(Point o1, Point o2)
{
    float distance;
    distance = sqrt(pow(((o1.x) - (o2.x)), 2) + pow(((o1.y) - (o2.y)), 2) + pow(((o1.z) - (o2.z)), 2));
    cout << "The distance between the point is " << distance << endl;
    return distance;
}

int main()
{
    Point p1, p2;

    p1.setPoint(3, 5, 4);
    p1.printPoint();

    p2.setPoint(3, 5, 4);
    p2.printPoint();
    Calculator dis;
    dis.distanceCalculator(p1, p2);

    return 0;
}