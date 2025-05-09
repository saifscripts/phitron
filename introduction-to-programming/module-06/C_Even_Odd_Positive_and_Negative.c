#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (a[i] > 0)
        {
            pos++;
        }
        else if (a[i] < 0)
        {
            neg++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    return 0;
}