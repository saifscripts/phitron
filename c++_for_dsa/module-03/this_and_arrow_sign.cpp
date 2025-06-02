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
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student a(10, 10, 2.5);
    Student b(2, 9, 4.5);

    cout << a.roll << " " << a.cls << " " << a.gpa << endl;
    cout << b.roll << " " << b.cls << " " << b.gpa << endl;

    return 0;
}