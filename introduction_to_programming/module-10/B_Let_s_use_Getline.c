#include <stdio.h>

int main()
{
    char s[1000001];

    for (int i = 0; scanf("%c", &s[i]); i++)
    {
        if (s[i] != '\\')
            printf("%c", s[i]);
        else
            break;
    }
    return 0;
}