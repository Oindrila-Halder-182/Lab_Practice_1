#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

class Employee : public Person
{
private:
    int employeeId;
    double salary;

public:
    void setEmployeeId(int employeeId)
    {
        this->employeeId = employeeId;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    int getEmployeeId()
    {
        return employeeId;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee emp;
    emp.setName("Oindrila");
    emp.setAge(26);
    emp.setEmployeeId(302);
    emp.setSalary(52000);

    cout << "Name: " << emp.getName() << endl;
    cout << "Age: " << emp.getAge() << endl;
    cout << "Employee ID: " << emp.getEmployeeId() << endl;
    cout << "Salary: " << emp.getSalary() << endl;

    return 0;
}