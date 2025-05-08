#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Pointer of arr[0]: %p\n", &arr[0]);
    printf("Pointer of arr[1]: %p\n", &arr[1]);
    printf("Pointer of arr[2]: %p\n", &arr[2]);
    printf("Pointer of arr[3]: %p\n", &arr[3]);
    printf("Pointer of arr[4]: %p\n", &arr[4]);

    // &arr[0] == arr
    printf("Pointer of arr[0]: %p\n", arr); // arr is the pointer of arr[0]

    // &arr[1] == arr + 1
    printf("Pointer of arr[1]: %p\n", arr + 1); // arr + 1 is the pointer of arr[1]

    // &arr[2] == arr + 2
    printf("Pointer of arr[2]: %p\n", arr + 2); // it is the pointer of arr[2]

    // change value by dereferencing
    *arr = 100;       // change the value of arr[0]
    *(arr + 1) = 200; // change the value of arr[1]
    *(arr + 4) = 500; // change the value of arr[4]

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}