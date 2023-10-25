#include "main.h"
/*

Assignment 1

A C program that takes a single word as input from the user and performs the following tasks:
1. Calculate the length of the word.
2. Create an array of characters to store the word.
3. Print the word in reverse order using pointers

*/

int main(void)
{
    char *str, *ptr;
    int n, i;
    int str_len;

    n = 15;
    printf("Enter a single word: \n");
    fgets(str, n, stdin);
    
    str_len = _strlen(str);

    char str_copy[str_len];

    for (i = 0; *(str + i); i++)
        *(str_copy + i) = *(str + i);

    ptr = str_copy + (str_len - 1);
    printf("\n");
    
    printf("Word output: %s", str);
    printf("Word size: %d\n", str_len);
    printf("Reversed string: ");
    
    for (i = 0; i < str_len; i++)
        printf("%c", *(ptr - i));

    printf("\n");

    return (0);
}
