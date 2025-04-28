#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int c[2] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[a[i]]++;
    }

    printf("%d %d", c[0], c[1]);

    return 0;
}