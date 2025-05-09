#include <stdio.h>

int main()
{
    int x = 10;
    printf("x => %d\n", x);
    printf("ptr of x => %p\n", &x);

    int *ptr = &x;
    printf("ptr of x => %p\n", ptr);

    int **ptr_of_ptr = &ptr;

    printf("ptr of ptr => %p\n", &ptr);
    printf("ptr of ptr => %p\n", ptr_of_ptr);

    int ***ptr_of_ptr_of_ptr = &ptr_of_ptr;

    printf("ptr of ptr of ptr => %p\n", &ptr_of_ptr);
    printf("ptr of ptr of ptr => %p\n", ptr_of_ptr_of_ptr);

    char c = 'a';

    printf("c => %c\n", c);
    printf("ptr of c => %p\n", &c);

    char *ptr_a = &c;
    printf("ptr of c => %p\n", ptr_a);

    return 0;
}