#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 0)
            continue;

        int max = 0;
        int max_idx;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] <= k && a[j] > max)
            {
                max = a[j];
                max_idx = j;
            }
        }

        if (max)
        {
            count++;
            a[i] = 0;
            a[max_idx] = 0;
        }
    }

    printf("%d", count);
    return 0;
}