#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 0
    string s1 = "Programming";
    cout << s1 << endl; // Programming

    // 1
    string s2("Programming");
    cout << s2 << endl; // Programming

    // 2
    string s3("Phitron", 3);
    cout << s3 << endl; // Phi

    // 3
    string s4(s1, 4);
    cout << s4 << endl; // ramming

    // 4
    string s5(7, 'D');
    cout << s5 << endl;
    return 0;
}