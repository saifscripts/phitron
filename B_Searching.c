#include <stdio.h>

int main()
{
    int n, x;
    int pos = -1;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            pos = i;
            break;
        }
    }

    printf("%d", pos);

    return 0;
}