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

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].marks >> students[i].roll;

        cout << students[i].name << " " << students[i].marks << " " << students[i].roll << endl;
    }

    return 0;
}