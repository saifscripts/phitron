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

Student *fun()
{
    Student a(10, 10, 2.5);
    return &a;
}

int main()
{
    Student *a = fun(); // returned pointer of the object
    cout << a->roll << " " << a->cls << " " << a->gpa << endl;
    // segmentation fault
    // can't print object properties as object is static variable it is vanished after function is returned

    return 0;
}