#include <stdio.h>

int main()
{
    char s[10000001];
    scanf("%s", s);

    int a[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        a[s[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
        {
            printf("%c : %d\n", i + 97, a[i]);
        }
    }

    return 0;
}