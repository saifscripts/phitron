#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int missing_number = -1;

        if (m % (a * b * c) == 0)
            missing_number = m / (a * b * c);

        printf("%lld\n", missing_number);
    }
    return 0;
}