#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    if (x >= 97)
    {
        printf("%c", x - 32);
    }
    else
    {
        printf("%c", x + 32);
    }

    return 0;
}