#include <stdio.h>

void print(int n, int i)
{
    if (i == n + 1)
    {
        return;
    }

    print(n, i + 1);
    printf("%d\n", i);
}

int main()
{
    int n;
    scanf("%d", &n);

    print(n, 1);
    return 0;
}