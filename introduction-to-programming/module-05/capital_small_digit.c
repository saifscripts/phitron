#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    if (x <= 57)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (x < 97)
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }

    return 0;
}