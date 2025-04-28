#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int db2 = 0, db3 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            db2++;
        }
        else if (a[i] % 3 == 0)
        {
            db3++;
        }
    }

    printf("%d %d", db2, db3);
    return 0;
}