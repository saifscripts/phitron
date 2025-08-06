#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i] = (long long int)(v[i - 1] + x);
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << v[r] - v[l - 1] << endl;
    }

    return 0;
}

// Time Complexity: O(Q);