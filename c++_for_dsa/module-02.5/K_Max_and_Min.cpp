#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, max, min;
    cin >> a >> b >> c;

    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    if (max < c)
    {
        max = c;
    }
    else if (min > c)
    {
        min = c;
    }

    cout << min << " " << max;

    return 0;
}