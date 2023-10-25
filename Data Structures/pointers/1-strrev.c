#include "main.h"
// char *_strrev(char *str, int size)
// {
//     // hello
//     char *ptr1, *ptr2;
//     char *s;
//     int i;

//     ptr1 = str;
//     ptr2 =  str + size;

//     for (i = 0; *(str + i); i++)
//     {
//         *(ptr2 + i) = *(s + i);
//         // ptr1++;
//         ptr2--;
//     }
//     return (str);
// }

int main(void)
{
    int n, i;
    char *str, s[n], *ptr2;

    str = "hello";
    n = 4;
    printf("%s\n", str);
    // s = _strrev(str, n);
	// ptr1 = str;
    ptr2 =  str + n;
    printf("%c\n", *ptr2);
	*s = *ptr2;
	ptr2--;
	s++;
	*s = *ptr2;
        // s[i] = ptr2[n];
    // for (i = 0; i < 5; i++)
    // {
    //     ptr1++;
    //     ptr2--;
	// 	n--;
    // }
    printf("%c", *s);
    
    return (0);
}
