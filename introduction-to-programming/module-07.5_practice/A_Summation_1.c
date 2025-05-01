#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum += a;
    }

    if (sum < 0)
        sum *= -1;

    printf("%lld", sum);

    return 0;
}