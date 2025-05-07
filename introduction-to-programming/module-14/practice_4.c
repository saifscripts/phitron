#include <stdio.h>

int is_even()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int ans = is_even();

    if (ans == 1)
        printf("Even");
    else
        printf("Odd");

    return 0;
}