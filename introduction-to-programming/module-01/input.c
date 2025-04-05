#include<stdio.h>

int main ()
{
    int num1;
    float num2;
    char c;

    scanf("%f %c %d", &num2, &c, &num1);
    printf("integer: %d\nfloat: %.1f\ncharacter: %c", num1, num2, c);
    // integer: 5
    // float: 1.1
    // character: c

    return 0;
}