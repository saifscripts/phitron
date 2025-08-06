#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    vector<long long int> s(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        s[i] = (long long int)(s[i - 1] + v[i]);
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }

    return 0;
}

// Time Complexity: O(Q);