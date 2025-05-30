#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    int cnt[r];
    int max = 0;

    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                count++;
            }
        }

        cnt[i] = count;

        if (count > max)
        {
            max = count;
        }
    }

    for (int i = 0; i < r; i++)
    {
        if (cnt[i] == max)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}