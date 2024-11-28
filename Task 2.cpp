#include <iostream>
#include <cmath>
using namespace std;

class Geometry 
{
public:
    double calculateArea(double side) 
    {
        return side * side;
    }

    double calculateArea(double length, double width) 
    {
        return length * width;
    }

    double calculateArea(double radius, bool isCircle) 
    {
        return M_PI * radius * radius;
    }
};

int main() 
{
    Geometry g;

    double squareSide = 4.0;
    double squareArea = g.calculateArea(squareSide);
    cout << "Square area (side = " << squareSide << "): " << squareArea << endl;

    double rectangleLength = 3.0;
    double rectangleWidth = 6.0;
    double rectangleArea = g.calculateArea(rectangleLength, rectangleWidth);
    cout << "Rectangle area (length = " << rectangleLength << ", width = " << rectangleWidth << "): " << rectangleArea << endl;

    double circleRadius = 4;
    double circleArea = g.calculateArea(circleRadius, true);
    cout << "Circle area (radius = " << circleRadius << "): " << circleArea << endl;

    return 0;
}