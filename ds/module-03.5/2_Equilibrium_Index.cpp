#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pre[n];

    cin >> pre[0];

    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        pre[i] = pre[i - 1] + x;
    }

    for (int i = 0; i < n; i++)
    {
        int left_sum = pre[i - 1];
        int right_sum = pre[n - 1] - pre[i];
        if (left_sum == right_sum)
        {
            cout << i;
            break;
        }
    }
    return 0;
}

// TC: O(N)