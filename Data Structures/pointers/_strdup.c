#include "main.h"

char *_strdup(char *str)
{
	char copy[_strlen(str)];
	int i;

	for (i = 0; *(str + i); i++)
		copy[i] = *(str + i);
	return (copy);
}
