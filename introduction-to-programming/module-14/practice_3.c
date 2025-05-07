#include <stdio.h>

void is_even()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    is_even();
    return 0;
}