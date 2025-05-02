#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", &s);
    int sum = 0;

    for (int i = 0; s[i] != 0; i++)
    {
        sum += s[i] - 48;
    }

    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}