#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0)
            {
                printf("NO");
                return 0;
            }
        }
    }

    printf("YES");

    return 0;
}