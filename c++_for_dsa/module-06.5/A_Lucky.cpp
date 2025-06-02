#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        int sum_first = 0;
        int sum_last = 0;

        for (int i = 0; i < 3; i++)
        {
            int d = n % 10;
            sum_last += d;
            n = n / 10;
        }

        for (int i = 0; i < 3; i++)
        {
            int d = n % 10;
            sum_first += d;
            n = n / 10;
        }

        if (sum_first == sum_last)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}