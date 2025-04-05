#include<stdio.h>

int main () {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    long long int mul = num1 * num2;
    int sub = num1 - num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d * %d = %lld\n", num1, num2, mul);
    printf("%d * %d = %d", num1, num2, sub);

    return 0;
}