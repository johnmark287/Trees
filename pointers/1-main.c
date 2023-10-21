#include "main.h"/***/
int main(void)
{
    char *str;
    int n;
    int str_len;

    n = 15;
    printf("Enter a single word: \n");
    fgets(str, n, stdin);
    str_len = _strlen(str);
    printf("\n");
    printf("Word output: %s", str);
    printf("Word size: %d\n", str_len);
    return (0);
}
