#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", 1);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("%d\n", n);
    return 0;
}