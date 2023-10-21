#include "main.h"
/**
 * _strlen - calculates string length.
 * 
 * @str: string to find length.
 * 
 * Return: string length on success.
*/
int _strlen(char *str)
{
    int i;

    if (str == NULL)
        return (-1);
    for (i = 0; *(str + i); i++)
        ;
    return (i);
}
