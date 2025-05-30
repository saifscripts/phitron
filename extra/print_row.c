#include <stdio.h>

int main()
{
    int r, c, x;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &x);

    for (int j = 0; j < c; j++)
    {
        printf("%d ", a[x][j]);
    }

    return 0;
}