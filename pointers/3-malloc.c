#include "main.h"
char **_malloc(char *str)
{
    int i, j, words;
    char *delim, **word_var;
    
    delim = " ";
    words = 0;
    j = 0;
    for (i = 0; *(str + i); i++)
    {
        for (; *(str + j) != *delim && *(str + j); j++)
        {
            *word_var = malloc(sizeof(char));
            // if (*word_var == NULL)
            //     return (NULL);
			// **(word_var + j);
			;
        }
        words += 1;
        word_var = malloc(sizeof(char) * i);
        if (word_var == NULL)
            return (NULL);
		*(word_var + i);
        j++;
        if (*(str + j) == '\0')
            break;
    }
    return (word_var);
}
