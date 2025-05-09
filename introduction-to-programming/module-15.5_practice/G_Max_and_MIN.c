#include <stdio.h>

int min_max(int a[], int n)
{
    int min = 100000;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }

        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min_max(a, n);

    return 0;
}