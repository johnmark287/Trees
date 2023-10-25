#include "main.h"
#include <stdlib.h>
/*
Assignment 2
C program that takes a sentence as input from the user and performs the following tasks:
1. Count the number of words in the sentence.
2. Create an array of strings, where each string represents a word from the sentence.
3. Print the words in reverse order using pointers.
*/
int main(void)
{
    char s[128], *ptr, *delim;
    int i, j, size, n, words;

    n = 128;
    printf("Type in a sentence: \n");
    fgets(s, size, stdin);
    size = _strlen(s);
    words = num_of_words(s);
    ptr = s + (size - 1);


    
    printf("\nReversed sentence is:\n");
    for (i = 0; i < size; i++)
        printf("%c", *(ptr - i));
    printf("\n");
    printf("\nNumber of words: %d.\n", words);
    return (0);
}
