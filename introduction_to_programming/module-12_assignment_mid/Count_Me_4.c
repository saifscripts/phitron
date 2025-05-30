#include <stdio.h>

int main()
{
    char s[10001];
    scanf("%s", &s);

    int a[123] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        a[s[i]]++;
    }

    for (int i = 97; i < 123; i++)
    {
        if (a[i] != 0)
        {
            printf("%c - %d\n", i, a[i]);
        }
    }
    return 0;
}