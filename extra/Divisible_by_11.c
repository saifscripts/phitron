#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    char n[102];
    scanf("%s", n);

    int len = strlen(n);

    int sum_odds = 0;
    int sum_evens = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            sum_odds += n[i] - 48;
        }
        else
        {
            sum_evens += n[i] - 48;
        }
    }

    if (abs(sum_evens - sum_odds) % 11 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}