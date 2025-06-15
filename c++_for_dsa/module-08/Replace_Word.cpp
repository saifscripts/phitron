#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int size_x = x.size();

        while (s.find(x) != -1)
        {
            s.replace(s.find(x), size_x, "#");
        }

        cout << s << endl;
    }

    return 0;
}