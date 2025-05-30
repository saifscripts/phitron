#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        do
        {
            printf("%d ", n % 10);
            n = n / 10;
        } while (n != 0);

        printf("\n");
    }
    return 0;
}