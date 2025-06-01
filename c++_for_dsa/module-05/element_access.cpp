#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s[4] << endl;      // o for Hello
    cout << s.at(0) << endl;   // H for Hello
    cout << s.front() << endl; // First index
    cout << s.back() << endl;  // Last index

    return 0;
}