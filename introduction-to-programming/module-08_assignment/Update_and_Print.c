#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int sum_pos = 0;
    int sum_neg = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);
    a[x] = v;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}