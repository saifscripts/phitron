#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int tmp;

    for (int i = 0; i < n / 2; i++)
    {
        tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

// 1 2 3 4 5
// 5 4 3 2 1

// 1 2 3 4 5 6
// 6 5 4 3 2 1

// iteration = n / 2
// start = 0
// end  < n / 2

// swap first value = i
// swap second value = n - 1 - i