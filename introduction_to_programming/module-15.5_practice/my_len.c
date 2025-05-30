// Question : Write a function named my_len() which receives a string as a parameter
// and then counts the length of that string and returns that count.Don’t use strlen()
// function to get the length of the string.After receiving that count in the main function
// print it.Note : The string will not have any spaces.

#include <stdio.h>

int my_len(char s[])
{
    int len = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }

    return len;
}

int main()
{
    char s[101];
    scanf("%s", s);

    int len = my_len(s);
    printf("%d", len);
    return 0;
}