#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);

            if (i == j)
            {
                sum += a[i][j];
            }

            if (i + j == n - 1)
            {
                sum -= a[i][j];
            }
        }
    }

    printf("%d", abs(sum));

    return 0;
}