int num_of_words(char *str)
{
    int i, j, words;
    char *delim;
    
    delim = " ";
    words = 0;
    j = 0;
    for (i = 0; *(str + i); i++)
    {
        for (; *(str + j) != *delim && *(str + j); j++)
        {
            // printf("%c", *(str + j));
            ;
        }
        // printf("\n");
        words += 1;
        j++;
        if (*(str + j) == '\0')
            break;
    }
    return (words);
}