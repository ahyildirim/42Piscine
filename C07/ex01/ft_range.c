#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *s;
    int i;

    i = 0; 
    if (min >= max)
        return (0);   
    s = malloc(sizeof(int*) * (max - min));
    if(!s)
        return (0);
    while(i < (max - min))
    {
        s[i] = min + i;
        i++;
    }
    return (s);
}