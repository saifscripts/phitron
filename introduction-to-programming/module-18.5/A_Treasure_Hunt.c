#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int b, k, depth;
        scanf("%d %d %d", &b, &k, &depth);

        int digged = 0;

        while (1)
        {
            digged += b;
            if (digged > depth)
            {
                printf("NO\n");
                break;
            }

            digged += k;
            if (digged > depth)
            {
                printf("YES\n");
                break;
            }
        }
    }
    return 0;
}