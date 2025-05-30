#include <stdio.h>

int main()
{
    char s[78];
    scanf("%s", s);

    int f[26] = {0};

    for (int i = 0; i < 77; i++)
    {
        f[s[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i] == 2)
        {
            printf("%c", i + 97);
            break;
        }
    }

    return 0;
}