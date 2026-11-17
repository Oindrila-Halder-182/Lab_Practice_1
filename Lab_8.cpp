#include <iostream>
using namespace std;

class Vehicle
{
public:
    void displayVehicleInfo()
    {
        cout << "This is a transport vehicle." << endl;
    }
};

class Car : public Vehicle
{
public:
    void carInfo()
    {
        cout << "Car Brand: Toyota, Number of Doors: 4" << endl;
    }
};

class Bus : public Vehicle
{
public:
    void busInfo()
    {
        cout << "Bus Route: Uttara - Motijheel, Capacity: 50 passengers" << endl;
    }
};

int main()
{
    Car c;
    c.displayVehicleInfo();
    c.carInfo();

    cout << endl;

    Bus b;
    b.displayVehicleInfo();
    b.busInfo();

    return 0;
}