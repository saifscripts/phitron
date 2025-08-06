#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s = n - 2;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        cout << "/" << endl;
        s -= 2;
    }

    for (int i = 1; i <= n / 2; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    s += 2;

    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << "/";
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
        s += 2;
    }

    return 0;
}