#include <stdio.h>

void is_even(int n)
{
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{

    int n;
    scanf("%d", &n);
    is_even(n);
    return 0;
}