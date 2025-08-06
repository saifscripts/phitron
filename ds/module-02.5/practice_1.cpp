// solving using the vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    reverse(v.begin(), v.end());

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}

// Time Complexity: O(N)
