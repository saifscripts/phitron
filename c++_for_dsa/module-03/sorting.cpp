#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sort(a, a + n); // sort full array
    // sort(a + 2, a + n); // sort from third element to the end
    // sort(a + 2, a + 6); // sort from index 2 to 5
    sort(a, a + n, greater<int>()); // descending order
    // greater is a built in compare function
    // here <int> is data type of the array.
    // we can also write custom compare function

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}