#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 3, 4, 5, 4, 5, 4};

    // replace 4 with 400 except the last one
    replace(v1.begin(), v1.end() - 1, 4, 400);
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    // find the value
    // vector<int>:: iterator it = find(v1.begin(), v1.end(), 400);
    auto it = find(v1.begin(), v1.end(), 5);

    if (it == v1.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
        // print the found value
        cout << *it << endl;

        // print the index
        cout << v1.size() - (v1.end() - it) << endl;
    }

    return 0;
}