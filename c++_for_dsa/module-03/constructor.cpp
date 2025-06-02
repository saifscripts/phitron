#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
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