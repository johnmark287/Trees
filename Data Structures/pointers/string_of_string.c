#include "main.h"
int main(void)
{
    char *str[];
    int i;

    printf("Enter a sentence: \n");
    
    for (i = 0; i < 2; i++)
    {
        printf("%s\n", str[i]);
    }
    return (0);
}
