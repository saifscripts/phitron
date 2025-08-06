#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> c(2 * n);
    for (int i = n; i < 2 * n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    cout << c[0];
    for (int i = 1; i < 2 * n; i++)
    {
        cout << " " << c[i];
    }

    return 0;
}
