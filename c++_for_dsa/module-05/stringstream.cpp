#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    int count = 0;
    string word;
    while (ss >> word)
    {
        cout << word << endl;
        count++;
    }
    cout << count << endl;
    return 0;
}