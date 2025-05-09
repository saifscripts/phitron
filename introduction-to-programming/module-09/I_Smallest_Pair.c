#include <stdio.h>
#include <limits.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    for (int x = 0; x < t; x++)
    {
        scanf("%d", &n);
        int a[n];
        int min = INT_MAX;

        for (int y = 0; y < n; y++)
        {
            scanf("%d", &a[y]);
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int sum = a[i - 1] + a[j - 1] + j - i;
                if (sum < min)
                {
                    min = sum;
                }
            }
        }

        printf("%d\n", min);
    }

    return 0;
}