#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a;
    char name[100] = "John";
    strcpy(a.name, name);
    a.roll = 10;
    a.gpa = 4.5;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}