#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student std[n];

    for (int i = 0; i < n; i++)
    {
        cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id;
    }

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        char tmp = std[i].s;
        std[i].s = std[j].s;
        std[j].s = tmp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << endl;
    }
    return 0;
}