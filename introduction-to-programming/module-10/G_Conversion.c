#include <stdio.h>

int main()
{
    char s[100001];
    scanf("%s", &s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ',')
        {
            printf(" ");
        }
        else if (s[i] >= 97)
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i] + 32);
        }
    }
    return 0;
}