#include <stdio.h>

void fun(int *p)
{
    *p = 20;
}

int main()
{
    int x = 10;
    fun(&x); // pass by reference
    printf("%d", x);
    return 0;
}