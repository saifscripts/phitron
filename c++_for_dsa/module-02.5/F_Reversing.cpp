#include <iostream>
#include <algorithm>
using namespace std;

// solving this problem by reversing the array first (although its not necessary)
// using swap function for practicing this function from algorithm

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = n - 1;

    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}