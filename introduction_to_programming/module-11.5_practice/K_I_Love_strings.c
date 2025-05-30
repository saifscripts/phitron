#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[51] = {0}, t[51] = {0};
        scanf("%s %s", &s, &t);

        int i = 0;
        while (s[i] || t[i])
        {
            if (s[i])
                printf("%c", s[i]);
            if (t[i])
                printf("%c", t[i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}