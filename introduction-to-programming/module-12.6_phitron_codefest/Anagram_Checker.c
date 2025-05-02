#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int fa[26] = {0}, fb[26] = {0};
    int is_anagram = 1;

    for (int i = 0; a[i] != 0 || b[i] != 0; i++)
    {
        fa[a[i] - 97]++;
        fb[b[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fa[i] != fb[i])
        {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram)
        printf("Yes");
    else
        printf("No");

    return 0;
}