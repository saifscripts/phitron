#include <stdio.h>

void print_array(int a[], int n, int i)
{
    if (i == n)
        return;

    print_array(a, n, i + 1);

    if (i % 2 == 0)
        printf("%d ", a[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    print_array(a, n, 0);

    return 0;
}