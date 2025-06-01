#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[10] = "Saif";
    // s = "Elham"; // not possible

    string s1 = "Saif";
    s1 = "Elham";

    string s2 = "Elham";

    // string can be compare directly without using strcmp
    if (s1 == s2)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }

    string x = "Small length";
    x = "The length is increased";
    cout << x << endl;

    return 0;
}