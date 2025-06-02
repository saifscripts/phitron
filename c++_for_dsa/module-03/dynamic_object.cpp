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
    Student *a = new Student(10, 10, 2.5);
    return a;
}

int main()
{
    Student *a = fun(); // returned pointer of the object
    cout << a->roll << " " << a->cls << " " << a->gpa << endl;
    // will print object properties as the object is dynamic object stored in heap memory

    return 0;
}