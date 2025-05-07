#include <stdio.h>
#include <math.h>

int main()
{
    printf("ceil: %d\n", (int)ceil(3.9));
    printf("floor: %d\n", (int)floor(3.9));
    printf("round: %d\n", (int)round(3.9));
    printf("sqrt: %d\n", (int)sqrt(16));
    printf("sqrt: %lf\n", sqrt(2));
    printf("sqrt: %lf\n", sqrt(16));
    printf("pow: %d\n", (int)pow(16, 2));
    printf("abs: %d\n", (int)abs(-16));
    printf("abs: %d\n", (int)abs(16));
    return 0;
}