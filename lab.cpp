#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
    void vehicleInfo() {
        cout << "Vehicle Info: This is a transport vehicle." << endl;
    }
};

class Fare {
public:
    void fareInfo() {
        cout << "Fare Info: Standard ticket fare applies." << endl;
    }
};
class Car : public Vehicle {
public:
    void carInfo() {
        cout << "Car Info: This is a private luxury car." << endl;
    }
};
class Bus : public Vehicle, public Fare {
public:
    void busInfo() {
        cout << "Bus Info: This is a public passenger bus." << endl;
    }
};

int main() {
    Car myCar;
    myCar.vehicleInfo();
    myCar.carInfo();
    Bus myBus;
    myBus.vehicleInfo();
    myBus.fareInfo();
    myBus.busInfo();

    return 0;
}