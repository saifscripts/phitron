#include <stdio.h>

int main()
{

    int a[3];
    int b[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}