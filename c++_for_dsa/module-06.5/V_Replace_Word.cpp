#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int size = s.size();

    for (int i = 0; i < size - 4; i++)
    {
        string sliced = s.substr(i, 5);
        if (sliced == "EGYPT")
        {
            s.replace(i, 5, " ");
            size -= 4;
        }
    }

    cout << s;
    return 0;
}