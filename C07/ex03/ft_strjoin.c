#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *s;
    int i;
    int j;
    int c;

    i = 0;
    c = 0;
    s = malloc(sizeof(strs));
    while(i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            s[c] = strs[i][j];
            j++;
            c++;
        }
        j = 0;
        while(sep[j] && i < size - 1)
        {
            s[c] = sep[j];
            j++;
            c++;
        }
    }
    s[c] = '\0';
    return (s);
}