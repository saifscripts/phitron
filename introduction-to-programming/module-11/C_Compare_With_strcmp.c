#include <stdio.h>
#include <string.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);

    if (strcmp(a, b) == -1)
        printf("%s", a);
    else
        printf("%s", b);

    return 0;
}