#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", &s);

    int i = 0;
    int j = strlen(s) - 1;
    int is_palindrome = 1;

    while (i < j)
    {
        if (s[i] != s[j])
            is_palindrome = 0;

        i++;
        j--;
    }

    if (is_palindrome)
        printf("YES");
    else
        printf("NO");

    return 0;
}