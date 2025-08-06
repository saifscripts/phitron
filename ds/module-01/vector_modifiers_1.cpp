#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2;
    vector<int> v3;

    // assign (method 1)
    v2 = v1;
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    // push back
    v1.push_back(5);
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    // pop back
    v1.pop_back();
    v1.pop_back();
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    // assign (method 2)
    v3.assign(v1.begin(), v1.end());
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    // insert 100 between 3 and 4 of v4
    vector<int> v4 = {1, 2, 3, 4, 5};
    v4.insert(v4.begin() + 3, 100);
    for (int x : v4)
    {
        cout << x << " ";
    }
    cout << endl;

    // insert v5 vector between 100 and 4 of v4;
    vector<int> v5 = {200, 300};
    v4.insert(v4.begin() + 4, v5.begin(), v5.end());
    for (int x : v4)
    {
        cout << x << " ";
    }
    cout << endl;

    // erase single value
    vector<int> v6 = {1, 3, 4, 5};
    v6.erase(v6.begin() + 2); // erase 4
    for (int x : v6)
    {
        cout << x << " ";
    }
    cout << endl;

    // erase a range
    vector<int> v7 = {1, 2, 3, 4, 5, 6, 7};
    v7.erase(v7.begin() + 2, v7.begin() + 6); // erase 3 to 6
    for (int x : v7)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}