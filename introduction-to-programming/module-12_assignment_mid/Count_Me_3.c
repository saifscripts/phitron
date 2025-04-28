#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[10001];
        scanf("%s", &s);

        int u = 0, l = 0, d = 0;

        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] >= 97)
                l++;
            else if (s[j] >= 65)
                u++;
            else
                d++;
        }

        printf("%d %d %d\n", u, l, d);
    }
    return 0;
}