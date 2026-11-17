#include <iostream>
using namespace std;

class Shape
{
protected:
    double dimension;

public:
    void setDimension(double dimension)
    {
        this->dimension = dimension;
    }

    virtual void calculateArea() = 0;
};

class Square : public Shape
{
public:
    void calculateArea()
    {
        cout << "Area of Square: " << dimension * dimension << endl;
    }
};

class Circle : public Shape
{
public:
    void calculateArea()
    {
        cout << "Area of Circle: " << 3.1416 * dimension * dimension << endl;
    }
};

int main()
{
    Square sq;
    Circle cr;
    double side, radius;

    cout << "Enter side of square: ";
    cin >> side;
    sq.setDimension(side);
    sq.calculateArea();

    cout << "Enter radius of circle: ";
    cin >> radius;
    cr.setDimension(radius);
    cr.calculateArea();

    return 0;
}