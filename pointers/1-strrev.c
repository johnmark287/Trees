#include "main.h"
char *_strrev(char *str, int size)
{
    // hello
    char *ptr1, *ptr2;
    char *s;
    int i;

    ptr1 = str;
    ptr2 =  str + size;

    for (i = 0; i < (size / 2); i++)
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2--;
    }

    return (str);
}

int main(void)
{
    char *str;
    int n;

    str = "hello";
    n = 5;
    printf("%s", str);
    _strrev(str, n);
    return (0);
}
