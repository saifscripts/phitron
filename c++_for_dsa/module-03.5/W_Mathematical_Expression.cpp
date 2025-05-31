#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    int ans = s == '+' ? a + b : s == '-' ? a - b
                                          : a * b;

    if (ans == c)
        cout << "Yes";
    else
        cout << ans;
    return 0;
}