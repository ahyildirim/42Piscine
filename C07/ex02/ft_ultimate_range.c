#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *s;
    int i;

    i = 0; 
    if (min >= max)
    {
        *range = 0;
        return (0);   
    }
    s = malloc(sizeof(int*) * (max - min));
    if(!s)
    {
        *range = 0;
        return (0);
    }
    *range = s;
    while(i < (max - min))
    {
        s[i] = min + i;
        i++;
    }
    return (max - min);
}