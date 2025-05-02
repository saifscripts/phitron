#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int min = 100000;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x < 0)
            x *= -1;

        if (x < min)
            min = x;
    }

    printf("%d", min);

    return 0;
}