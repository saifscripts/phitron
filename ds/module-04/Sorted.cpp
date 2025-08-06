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
        int a[n];
        cin >> a[0];

        bool sorted = true;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < a[i - 1])
            {
                sorted = false;
            }
        }

        if (sorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}