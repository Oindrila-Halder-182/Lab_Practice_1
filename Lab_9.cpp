#include <iostream>
using namespace std;

class Vehicle
{
public:
    void vehicleInfo()
    {
        cout << "General Vehicle Information." << endl;
    }
};

class Fare
{
public:
    void fareInfo()
    {
        cout << "Transportation Fare: 50 BDT" << endl;
    }
};

class Car : public Vehicle
{
public:
    void carInfo()
    {
        cout << "This is a private Car." << endl;
    }
};

class Bus : public Vehicle, public Fare
{
public:
    void busInfo()
    {
        cout << "This is a public Bus." << endl;
    }
};

int main()
{
    Car c;
    c.vehicleInfo();
    c.carInfo();

    cout << endl;

    Bus b;
    b.vehicleInfo();
    b.fareInfo();
    b.busInfo();

    return 0;
}