#include<stdio.h>

int main ()
{
    int max = 2147483647;
    int max_plus = 2147483648;

    printf("max: %d\n", max); // max: 2147483647
    printf("max_plus: %d\n", max_plus); // max_plus: -2147483648
   
    int min = -2147483647;
    int min_minus = -2147483648;

    printf("min: %d\n", min); // min: 2147483647
    printf("min_minus: %d", min_minus); // min_minus: -2147483648

    return 0;
}