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
    Student minimum;
    minimum.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].marks >> students[i].roll;

        if (students[i].marks < minimum.marks)
        {
            minimum = students[i];
        }
    }

    cout << minimum.name << " " << minimum.marks << " " << minimum.roll << endl;

    return 0;
}