#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cin >> q;

    bool found = false;
    int l = 0, r = n - 1;
    while (r >= l)
    {
        int m = (l + r) / 2;
        if (v[m] == q)
        {
            found = true;
            break;
        }
        else if (q > v[m])
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    if (found)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}