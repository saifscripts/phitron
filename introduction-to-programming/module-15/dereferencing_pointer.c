#include <stdio.h>

int main()
{
    int x = 30;
    int *ptr = &x;

    printf("x => %d\n", x);
    printf("ptr of x => %p\n", &x);
    printf("ptr of x from variable => %p\n", ptr);
    printf("x from dereferencing => %d\n", *ptr);

    *ptr = 40;

    printf("x after updating via dereferencing => %d\n", x);

    return 0;
}