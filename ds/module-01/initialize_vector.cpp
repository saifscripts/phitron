#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1; // O(1)
    cout << v1.size() << endl;

    vector<int> v2(5); // O(N)
    cout << v2.size() << endl;

    vector<int> v3(6, 2); // O(N)
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    vector<int> v4(v3); // O(N)
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;

    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v5(a, a + 5); // O(N)
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;

    vector<int> v6 = {1, 2, 3, 4, 5, 6, 7}; // O(N)
    for (int i = 0; i < v6.size(); i++)
    {
        cout << v6[i] << " ";
    }
    cout << endl;

    return 0;
}