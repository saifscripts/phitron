#include <stdio.h>
#include <string.h>

void print_string(char s[])
{
    printf("%s\n", s);

    int len = strlen(s); // calculate length inside function if needed

    for (int i = 0; i < len; i++)
    {
        printf("%c", s[i]);
    }
}

int main()
{
    char s[101];
    scanf("%s", s);  // & is optional, because s is a pointer
    print_string(s); // don't need to pass length
    return 0;
}