#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if (x < 65)
    {
        cout << "IS DIGIT";
    }
    else
    {
        cout << "ALPHA" << endl;
        if (x < 97)
        {
            cout << "IS CAPITAL";
        }
        else
        {
            cout << "IS SMALL";
        }
    }
    return 0;
}