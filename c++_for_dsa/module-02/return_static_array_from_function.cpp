#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    return a; // warning
}

int main()
{
    int *p = fun();

    for (int i = 0; i < 5; i++)
    {
        cout << p[i]; // segmentation fault error
    }

    cout << p << endl;

    return 0;
}