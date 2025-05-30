#include <stdio.h>

int main()
{
    int a, b, c, min, max;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        min = b;
        max = a;
    }
    else
    {
        min = a;
        max = b;
    }

    if (min > c)
    {
        min = c;
    }
    else if (c > max)
    {
        max = c;
    }

    printf("%d %d", min, max);

    return 0;
}