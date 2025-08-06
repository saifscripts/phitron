#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int pre[n];
    cin >> pre[0];

    for (int i = 1; i < n; i++)
    {
        long long int x;
        cin >> x;
        pre[i] = pre[i - 1] + x;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << pre[i] << " ";
    }
    return 0;
}