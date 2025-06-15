// A student has several pieces of information, such as a
//  unique ID, name, section, and total marks. You will be given the information of three students.                                                                                                                                                                               Ouptut the information as asked in the question.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        Student s[3];
        Student highest;
        highest.total_marks = INT_MIN;

        for (int j = 0; j < 3; j++)
        {
            cin >> s[j].id >> s[j].name >> s[j].section >> s[j].total_marks;
            if (s[j].total_marks > highest.total_marks)
                highest = s[j];
        }

        cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.total_marks << endl;
    }
    return 0;
}