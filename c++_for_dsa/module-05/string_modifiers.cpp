#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string concat using +=
    string s1 = "Hello World";
    string s2 = " Hi";
    s1 += s2;
    cout << s1 << endl;

    // string concat by s.append()
    string s3 = "Saif ";
    string s4 = "Elham";
    s3.append(s4);
    cout << s3 << endl;

    // update any character
    s3[0] = 'G';
    cout << s3 << endl;

    // add a character using +=
    s3 += 'A';
    cout << s3 << endl;

    // add a character using s.push_back()
    s3.push_back('A');
    cout << s3 << endl;

    // add a character using index (Its not possible, because size is not expanding)
    s3[s3.size()] = 'B';
    cout << s3 << endl;

    // remove last character
    s3.pop_back();
    cout << s3 << endl;

    // updating with a new string
    s3 = s1;
    cout << s3 << endl;

    // updating with a new string
    s4.assign(s1);
    cout << s4 << endl;

    // erase from index 5 to end
    s3.erase(5);
    cout << s3 << endl;
    cout << "Size: " << s3.size() << endl;

    // insert "TEST" in index 5
    s1.insert(5, "TEST");
    cout << s1 << endl;

    // erase 2 characters from index 3
    s4.erase(3, 2);
    cout << s4 << endl;
    cout << "Size: " << s4.size() << endl;

    // replace (delete 1 characters from index 3 and add " lo")
    s4.replace(3, 1, "lo ");
    cout << s4 << endl;
    cout << "Size: " << s4.size() << endl;

    return 0;
}