#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun()
{
    Student a(10, 10, 2.5);
    return a;
}

int main()
{
    Student a = fun(); // object is returned just like variable
    cout << a.roll << " " << a.cls << " " << a.gpa << endl;

    return 0;
}