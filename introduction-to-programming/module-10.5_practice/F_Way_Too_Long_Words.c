#include <stdio.h>
#include <string.h>

int main()
{
    char t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[101];
        scanf("%s", &s);
        int len_s = strlen(s);

        if (len_s > 10)
        {
            printf("%c%d%c\n", s[0], len_s - 2, s[len_s - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }
    return 0;
}