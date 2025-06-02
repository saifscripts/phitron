#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s1[51] = {0}, s2[51] = {0};
        cin >> s1 >> s2;

        for (int i = 0; s1[i] || s2[i]; i++)
        {
            if (s1[i])
                cout << s1[i];
            if (s2[i])
                cout << s2[i];
        }

        cout << endl;
    }
    return 0;
}