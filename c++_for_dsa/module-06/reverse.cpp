#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {4, 2, 56, 3, 7};

    reverse(a, a + 5);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    string s = "Hello";
    reverse(s.begin(), s.end());
    cout << endl
         << s << endl;
    return 0;
}