#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int head = 5 + (n + 1) / 2;

    for (int i = 1; i <= head; i++)
    {
        for (int j = 1; j <= head - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= ((2 * head - 1) - n) / 2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}