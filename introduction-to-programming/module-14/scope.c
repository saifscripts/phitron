#include <stdio.h>

// global variable
int x = 20;

void fn()
{
    printf("fn -> %d\n", x);
}

int main()
{
    printf("main -> %d\n", x);
    fn();
    return 0;
}

// scope is the area where a variable is accessible
// a variable declared in function (or parameters) is only accessible inside that function
// a variable declared in for/while/do while loop is only accessible inside that loop
// a variable declared in if/else/if else block is accessible inside that specific if/else/if else block
// a global variable is accessible from anywhere

// NOTE:
// only variable and function can be declared globally
// we can't execute other codes in global space
// example: we can't execute printf, scanf, for loop, if else etc in global space
