#include "main.h"
/*
Assignment 3

Write a C program that takes a sentence as input from the user and performs the following tasks:
1. Count the number of words in the sentence.
2. Dynamically allocate an array of strings, where each string represents a word from the sentence.
3. Check for memory allocation
4. Store each word in the allocated memory.
5. Find the longest and shortest words in the sentence and print them.
6. Convert all the words to uppercase and print them.
7. Free the dynamically allocated memory after completing the tasks.

Now That tuliona assignment ni rahisi sanaa Hint no 5: #include <ctype.h>
*/
int main(void)
{
    int i, n, words, j;
    char str[128], *delim, **word_var;
    

    n = 128;
    printf("Type in a sentence: \n");
    fgets(str, n, stdin);


    delim = " ";
    words = 0;
    j = 0;
    for (i = 0; *(str + i); i++)
    {
        for (; *(str + j) != *delim && *(str + j); j++)
        {
            **word_var = malloc(sizeof(char));
            if (*word_var == NULL)
                return (NULL);
			**(word_var + j);
        }
        words += 1;
        word_var = malloc(sizeof(char) * );
        if (word_var == NULL)
            return (NULL);
		*(word_var + i);
        j++;
        if (*(str + j) == '\0')
            break;
    }


    words = num_of_words(str);
    return (0);
}
