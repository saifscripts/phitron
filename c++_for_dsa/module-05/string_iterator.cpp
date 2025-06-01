#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    cout << *s.begin() << endl;     // H
    cout << *s.end() << endl;       // NULL
    cout << *(s.end() - 1) << endl; // o
    *s.begin() = 'G';               // replace the first character
    cout << s << endl;              // Gello

    // iterate using iterator
    for (string::iterator i = s.begin(); i < s.end(); i++)
    {
        cout << *i << endl;
    }

    // auto detect iterator type (c++ 11+)
    for (auto i = s.begin(); i < s.end(); i++)
    {
        cout << *i << endl;
    }
    return 0;
}