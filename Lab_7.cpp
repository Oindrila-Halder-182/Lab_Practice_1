#include <iostream>
using namespace std;

class University
{
public:
    void universityInfo()
    {
        cout << "University: Dhaka International University" << endl;
    }
};

class Department : public University
{
public:
    void departmentInfo()
    {
        cout << "Department: Computer Science and Engineering" << endl;
    }
};

class Student : public Department
{
public:
    void studentInfo()
    {
        cout << "Student ID: 105, Name: Sadia Islam" << endl;
    }
};

int main()
{
    Student st;
    st.universityInfo();
    st.departmentInfo();
    st.studentInfo();

    return 0;
}