#include <bits/stdc++.h>
using namespace std;

vector<int> running_sum(vector<int> a)
{
    int n = a.size();
    vector<int> sum(n);

    sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }

    return sum;
}

int main()
{
    // Input
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Running Sum / Prefix Sum
    vector<int> sum = running_sum(a);

    // Output
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << " ";
    }

    return 0;
}