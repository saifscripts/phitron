#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> fre(26, 0);

    for (char x : s)
    {
        fre[x - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i])
        {
            cout << (char)(i + 'a') << " : " << fre[i] << endl;
        }
    }

    return 0;
}

// Time Complexity: O(N)