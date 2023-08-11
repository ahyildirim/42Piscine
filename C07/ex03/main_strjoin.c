#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *s;
    int i;
    int j;
    int k;

    i = 0;
    k = 0;
    s = malloc(sizeof(strs));
    while(i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            s[k] = strs[i][j];
            j++;
            k++;
        }
        j = 0;
        while(sep[j] && i < size - 1)
        {
            s[k] = sep[j];
            j++;
            k++;
        }
    }
    s[k] = '\0';
    return (s);
}

#include <stdio.h>
int main()
{
    char **strs;
    char *sep;
    char *s;

    strs = (char**)malloc(sizeof(char*) * 3);
    strs[0] = "Ahmet";
    strs[1] = "Yıldırım";
    sep = " Hakan ";

    s = ft_strjoin(2, strs, sep);
    printf("%s\n", s);
}