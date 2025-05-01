#include <stdio.h>

int main()
{
    char s[1001], t[1001];
    scanf("%s %s", &s, &t);

    int len_s = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len_s++;
    }

    int len_t = 0;
    for (int i = 0; t[i] != '\0'; i++)
    {
        len_t++;
    }

    printf("%d %d\n", len_s, len_t);
    printf("%s %s", s, t);
    return 0;
}