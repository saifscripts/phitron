#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;
};

bool cmp(Student l, Student r)
{
    return l.marks == r.marks ? l.roll < r.roll : l.marks > r.marks;
}

int main()
{
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].marks >> students[i].roll;
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].marks << " " << students[i].roll << endl;
    }

    return 0;
}