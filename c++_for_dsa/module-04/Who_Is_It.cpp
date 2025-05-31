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

    Student(int id,
            string name,
            char section,
            int total_marks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        // fill out dummy data
        Student s[3] = {Student(1, "lsjdf", 'a', 5), Student(1, "lsjdf", 'a', 5), Student(1, "lsjdf", 'a', 5)};

        for (int j = 0; j < 3; j++)
        {
            int id;
            string name;
            char section;
            int total_marks;

            cin >> id >> name >> section >> total_marks;
            Student st(id, name, section, total_marks);
            s[j] = st;
        }

        Student highest = s[0];

        if (s[0].total_marks < s[1].total_marks)
        {
            highest = s[1];
        }

        if (highest.total_marks < s[2].total_marks)
        {
            highest = s[2];
        }

        cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.total_marks << endl;
    }
    return 0;
}