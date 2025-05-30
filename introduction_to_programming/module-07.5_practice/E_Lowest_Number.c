#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int min = INT_MAX;
    int pos = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] < min)
        {
            min = a[i];
            pos = i + 1;
        }
    }

    printf("%d %d", min, pos);
    return 0;
}