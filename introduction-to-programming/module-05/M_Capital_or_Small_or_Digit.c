#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    if (x >= 65)
    {
        printf("ALPHA\n");

        if (x >= 97)
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}