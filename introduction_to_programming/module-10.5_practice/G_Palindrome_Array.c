#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0, j = n - 1, is_palindrome = 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            is_palindrome = 0;
        }

        i++;
        j--;
    }

    if (is_palindrome)
        printf("YES");
    else
        printf("NO");

    return 0;
}