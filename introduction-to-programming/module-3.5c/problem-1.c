#include<stdio.h>

int main ()
{
    int n = 20;

    while(n != 0) {
        printf("%d\n", n);
        n = n / 2;
    }

    return 0;
}