#include <stdio.h>
#include <limits.h>

int main()
{
    int n, min = INT_MAX, max = INT_MIN;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] < min)
        {
            min = a[i];
        }

        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            printf("%d ", max);
        }
        else if (a[i] == max)
        {
            printf("%d ", min);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}