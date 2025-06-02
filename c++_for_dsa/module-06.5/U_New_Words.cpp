#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[5] = {0};

    for (char c : s)
    {
        switch (c)
        {
        case 'E':
            a[0]++;
            break;
        case 'e':
            a[0]++;
            break;
        case 'G':
            a[1]++;
            break;
        case 'g':
            a[1]++;
            break;
        case 'Y':
            a[2]++;
            break;
        case 'y':
            a[2]++;
            break;
        case 'P':
            a[3]++;
            break;
        case 'p':
            a[3]++;
            break;
        case 'T':
            a[4]++;
            break;
        case 't':
            a[4]++;
            break;
        default:
            break;
        }
    }

    int min = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
            min = a[i];
    }

    cout << min;
    return 0;
}