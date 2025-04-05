#include<stdio.h>

int main ()
{
    // integer
    int num1 = 10;
    num1 = 65;

    // float
    float num2 = 4.365;

    // character
    char c = '$';

    printf("num1: %d\nnum2: %.2f\nchar: %c", num1, num2, c);
    // num1: 65
    // num2: 4.36
    // char: $
    return 0;
}