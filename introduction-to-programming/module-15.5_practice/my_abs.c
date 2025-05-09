// Question : Write a function named my_abs() that receives an integer
// value as parameter and returns the absolute value of that.Absolute value
// means if the value is negative it will be converted to positive value.
// Then print the value in the main function.

#include <stdio.h>

int my_abs(int n)
{
    if (n < 0)
        n *= -1;

    return n;
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = my_abs(n);
    printf("%d", result);

    return 0;
}