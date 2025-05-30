#include <stdio.h>

int *return_array()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("inside return_array fn: %p\n", a);

    return a; // warning: function returns address of local variable [-Wreturn-local-addr]
}

int main()
{
    int *arr = return_array(); // expected to return pointer of the array (but its giving an warning)

    printf("inside main fn: %p\n", arr); // but its not not getting the pointer here

    return 0;
}

// NOTE:
// can't return array from function (don't know what return type should be)
// returning reference is not working also