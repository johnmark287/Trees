#include "main.h"

int main()
{
	char str[] = "Geeks for Geeks";

	// Returns first token
	char* token = (char *)_strtok(str, " ");

	// Keep printing tokens while one of the
	// delimiters present in str[].
		printf(" % s\n", token);
	// while (token != NULL) {
	// 	token = strtok(NULL, " ");
	// }

	return 0;
}
