#include <stdio.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);

    int result = 0;

    int i = 0;
    while (1)
    {
        if (a[i] == 0 && b[i] == 0)
        {
            result = 0;
            break;
        }
        else if (a[i] == 0)
        {
            result = -1;
            break;
        }
        else if (b[i] == 0)
        {
            result = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            result = -1;
            break;
        }
        else if (a[i] > b[i])
        {
            result = 1;
            break;
        }

        i++;
    }

    if (result == -1)
    {
        printf("%s", a);
    }
    else
    {
        printf("%s", b);
    }

    return 0;
}