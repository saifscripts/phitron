#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 3, 4, 5, 4, 5, 4};

    cout << v1[3] << endl;             // element access
    cout << v1.at(3) << endl;          // element access
    cout << v1[0] << endl;             // first element access
    cout << v1.front() << endl;        // first element access
    cout << v1[v1.size() - 1] << endl; // last element access
    cout << v1.back() << endl;         // last element access

    return 0;
}