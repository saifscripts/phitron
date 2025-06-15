#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;
};

int main()
{
    int n;
    cin >> n;
    Student students[n];
    Student maximum;
    maximum.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].marks >> students[i].roll;

        if (students[i].marks > maximum.marks)
        {
            maximum = students[i];
        }
    }

    cout << maximum.name << " " << maximum.marks << " " << maximum.roll << endl;

    return 0;
}