#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        int f[26] = {0};
        string s;
        cin >> n;
        cin >> s;

        for (char c : s)
        {
            if (f[c - 'A'] == 0)
            {
                count++;
            }

            count++;
            f[c - 'A']++;
        }

        cout << count << endl;
    }

    return 0;
}