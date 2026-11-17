#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void displayPersonInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person
{
public:
    int employeeId;
    double salary;

    void displayEmployeeInfo()
    {
        displayPersonInfo();
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp;
    emp.name = "Oindrila Halder";
    emp.age = 20;
    emp.employeeId = 501;
    emp.salary = 45000;

    emp.displayEmployeeInfo();

    return 0;
}