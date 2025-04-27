#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[n]);

        if (a[n] <= 10)
        {
            printf("A[%d] = %d\n", i, a[n]);
        }
    }
    return 0;
}