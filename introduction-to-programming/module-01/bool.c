#include<stdio.h>
#include<stdbool.h>

int main ()
{
    bool isGood = true;
    bool isBad = false;
    printf("%d\n", isGood); // 1
    printf("%d\n", isBad); // 0
    printf("%f\n", isGood); // 0.000000
    printf("%f\n", isBad); // 0.000000
    printf("%c\n", isGood); // 
    printf("%c", isBad); // NUL character
    return 0;
}