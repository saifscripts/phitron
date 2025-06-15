#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r)
{
    int total_l = l.math_marks + l.eng_marks;
    int total_r = r.math_marks + r.eng_marks;

    return total_l == total_r ? l.id < r.id : total_l > total_r;
}

int main()
{
    int n;
    cin >> n;
    Student std[n];

    for (int i = 0; i < n; i++)
    {
        cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id >> std[i].math_marks >> std[i].eng_marks;
    }

    sort(std, std + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << " " << std[i].math_marks << " " << std[i].eng_marks << endl;
    }
    return 0;
}