#include <stdio.h>

int main()
{
    int a, c;
    long long int b, d;

    scanf("%d %lld %d %lld", &a, &b, &c, &d);

    printf("Difference = %lld", (a * b) - (c * d));
    return 0;
}