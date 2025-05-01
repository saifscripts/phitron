#include <stdio.h>

int main()
{
    int t, n;
    long long int f;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        f = 1;
        for (int j = 2; j <= n; j++)
        {
            f *= j;
        }

        printf("%lld\n", f);
    }
    return 0;
}