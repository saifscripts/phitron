#include <stdio.h>

// void fun(int *a) <- Same
int *fun(int a[])
{
    printf("%p\n", a); // pointer of same arr in the main function
    a[2] = 300;        // will update the value or original array (arr[2])
    return a;
}

int main()
{
    int arr[3] = {10, 20, 30};

    printf("%p\n", arr);     // pointer of arr[0]
    printf("%p\n", &arr[0]); // pointer of arr[0]

    int *result = fun(arr); // returns pointer of the array

    printf("%d\n", arr[0]); // 10
    printf("%d\n", arr[2]); // print updated value from the function (300)
    printf("%p\n", result); // pointer of original array (&arr[0])

    return 0;
}