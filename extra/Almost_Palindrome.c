#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[1001];
        scanf("%s", s);

        int fre[26] = {0};

        for (int j = 0; s[j] != 0; j++)
        {
            fre[s[j] - 'a']++;
        }

        int odds = 0;

        for (int j = 0; j < 26; j++)
        {
            if (fre[j] % 2 != 0)
            {
                odds++;
            }
        }

        if (odds > 0)
        {
            odds--;
        }

        printf("%d\n", odds);
    }
    return 0;
}