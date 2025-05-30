#include <stdio.h>

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);

    int count = -1;

    for (int i = l; i <= r; i++)
    {

        int n = i;
        int evens = 0;
        int odds = 0;

        while (n)
        {
            int last_digit = n % 10;
            if (last_digit % 2 == 0)
            {
                evens++;
            }
            else
            {
                odds++;
            }

            n /= 10;
        }

        if (evens == odds)
        {
            printf("%d\n", i);
            count++;
        }
    }

    if (count == -1)
    {
        printf("%d", count);
    }

    return 0;
}