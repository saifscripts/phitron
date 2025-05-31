// Create three static objects with the help of the constructor of the following class.
// Student
// {
//     name;
//     roll;
//     section;
//     math_marks;
//     cls;
// }
// Then compare those 3 objects and print who got the highest math_marks and print his / her name.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(char name[100], int roll, char section, int math_marks, int cls)
    {
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;

        int len = strlen(name);
        for (int i = 0; i < len; i++)
        {
            this->name[i] = name[i];
        }
        this->name[len] = '\0';
    }
};

int main()
{
    char s1_name[100] = "Saif Elham";
    char s2_name[100] = "Tofayel Islam";
    char s3_name[100] = "Tarek Mahmud";

    Student s1(s1_name, 10, 'A', 99, 5);
    Student s2(s2_name, 11, 'B', 98, 5);
    Student s3(s3_name, 12, 'C', 100, 5);

    Student topper = s1;

    if (s2.math_marks > s1.math_marks)
    {
        topper = s2;
    }

    if (s3.math_marks > topper.math_marks)
    {
        topper = s3;
    }

    cout << topper.name << endl;

    return 0;
}