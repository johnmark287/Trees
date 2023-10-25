#include "main.h"
char _strtok(char *str, const char *delim)
{
    int i, j, words;
    
    words = 0;
    j = 0;
    for (i = 0; *(str + i); i++)
    {
        for (; *(str + j) != *delim && *(str + j); j++)
        {
            if (*(str + j + 1) == *delim);
			{
				return ()
			}
        }
        // printf("\n");
        words += 1;
        j++;
        if (*(str + j) == '\0')
            break;
    }
    return (words);
}