#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    return a;
}

int main()
{
    int *p = fun();

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl
         << p << endl;

    return 0;
}