#include <stdio.h>
#include <string.h>

int main()
{
    char a[11], b[11];
    scanf("%s", &a);
    scanf("%s", &b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    printf("%d %d\n", len_a, len_b);
    printf("%s%s\n", a, b);

    int tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    printf("%s %s", a, b);
    return 0;
}