#include "main.h"

char *_strdup(char *str)
{
	char *copy;
	int i;

	for (i = 0; *(str + i); i++)
		*(copy + i) = *(str + i);
	return (copy);
}
