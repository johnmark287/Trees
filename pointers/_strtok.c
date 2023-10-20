// C program for splitting a string
// using strtok()
#include <stdio.h>
#include "main.h"

char *_strdup(char *str)
{
	char *copy;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}

// char *_strtok(char *str, const char *delim)
// {
//     char *str_copy;
// 	char *token;
// 	size_t i;

// 	str_copy = _strdup(str);
// 	for (i = 0; *(str_copy + i) != *delim; i++)
// 		*(token + i) = *(str_copy + i);
// 	return (token);
// }

int main(void)
{
	char *str = "johnmark muhando";
	char *copy;
	// char *token = (char *)_strtok(str, " ");
	copy = _strdup(str);
	printf("%s", copy);
	return (0);
}
