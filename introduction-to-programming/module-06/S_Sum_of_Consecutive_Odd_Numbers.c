#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            int tmp = x;
            x = y;
            y = tmp;
        }

        int sum = 0;
        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 == 1)
            {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}