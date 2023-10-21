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
    char *str;
    int n;
    int str_len;

    n = 15;
    printf("Enter a single word: \n");
    fgets(str, n, stdin);

    str_len = _strlen(str);
    printf("\n");
    
    printf("Word output: %s", str);
    printf("Word size: %d\n", str_len);
    return (0);
}
