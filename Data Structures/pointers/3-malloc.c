#include "main.h"
int main(void)
{
    // hello world\0
    int i, j, words;
    char *delim, **word_var, *str;
    
    delim = " ";
    words = 0;
    j = 0;
    str = "hello world really!!";
    for (i = 0; *(str + i); i++)
    {
        for (; *(str + j) != *delim && *(str + j); j++)
        {
			;
        }
        *word_var = malloc(sizeof(char) * j);
        printf("@");
        // *word_var++;
        // if (*word_var == NULL)
        //     return (-1);
        // word_var;
        // words += 1;
        // word_var = malloc(sizeof(char) * i);
        // j++;
        // if (*(str + j) == '\0')
        //     break;
    }
    
    // printf("words: \n");
    // for (i = 0; i < words; i++)
    //     printf("%s", *word_var);
    return (0);
}
