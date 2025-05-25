#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (a[i + 1] == 1)
                {
                    a[i] = 2;
                    a[i + 1] = 3;
                }
                else if (a[i + 1] % 2 == 0)
                {
                    a[i] = 2;
                    a[i + 1]++;
                }
                else if (a[i + 1] % 2 != 0)
                {
                    a[i] = 2;
                }
            }
            else if (a[i] == 2 && a[i + 1] == 1)
            {
                a[i + 1] = 3;
            }
            else if (a[i + 1] % a[i] == 0)
            {
                a[i + 1]++;
            }

            cout << a[i] << " ";
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }

        cout << endl;
    }
}