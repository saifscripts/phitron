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
        if (a[i] > 0)
            sum_pos += a[i];
        else
            sum_neg += a[i];
    }

    printf("%d %d", sum_pos, sum_neg);
    return 0;
}