#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input string  using -> char s[n]
    char s1[100];
    cin.getline(s1, 100);
    cout << s1 << endl;

    // input string using -> string s
    string s2;
    getline(cin, s2);
    cout << s2 << endl;

    // we don't need to ignore new line
    string s3;
    getline(cin, s3);
    cout << s3 << endl;

    int i;
    cin >> i;
    cout << i << endl;

    // we need to ignore new line
    // because previous input reads only the integer
    // and leaves the newline ('\n') in the buffer.
    cin.ignore();
    string s4;
    getline(cin, s4);
    cout << s4 << endl;

    return 0;
}