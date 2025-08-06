#include <bits/stdc++.h>
using namespace std;

int main()
{
    // type 1
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // type 2
    vector<int> v2;
    int x;

    while (cin >> x)
    {
        v2.push_back(x);
    }

    for (int a : v2)
    {
        cout << a << " ";
    }

    return 0;
}