#include <stdio.h>

int main()
{
    int i = 1;

    while (8 * i <= 200)
    {
        printf("8 * %d = %d\n", i, 8 * i);
        i++;
    }

    return 0;
}