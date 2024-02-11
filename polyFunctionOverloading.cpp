#include <iostream>
using namespace std;

class Area
{
public:
    // area of Square
    int calculateArea(int side)
    {
        return side * side;
    }
    // Function to calculate the area of a rectangle
    float calculateArea(float length, float width)
    {
        return length * width;
    }
    // Function to calculate the area of a circle
    float calculateArea(float radius)
    {
        return 3.14 * radius * radius;
    }
};

int main()
{

    Area a;

    // Calculate and display the areas of different shapes
    cout << "Area of square: " << a.calculateArea(89) << endl;
    cout << "Area of rectangle: " << a.calculateArea(float(6.7), float(5.6)) << endl;
    cout << "Area of circle: " << a.calculateArea(float(3.17)) << endl;

    return 0;
}
