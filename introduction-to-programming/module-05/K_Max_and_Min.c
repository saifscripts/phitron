#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max, min;

    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    if (c > max)
    {
        max = c;
    }

    if (c < min)
    {
        min = c;
    }

    printf("%d %d", min, max);

    return 0;
}