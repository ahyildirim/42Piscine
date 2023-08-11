#include <stdlib.h>

int ft_strlen(char *str)
{
    int a;

    a = 0;
    while(str[a])
        a++;
    return (a);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int a;

    a = 0;
    if(size != 0)
    {
        while(src[a] && a < size - 1)
        {
            dest[a] = src[a];
            a++;
        }
        dest[a] = '\0';
    }
    return (ft_strlen(src));
}

char *ft_strdup(char *src)
{
    char *dest;
    int size;

    size = ft_strlen(src);
    dest = malloc(sizeof(char*) * size + 1);
    if(!dest)
        return (NULL);
    ft_strlcpy(dest, src, size + 1);
    return (dest);
}

#include <stdio.h>
int main()
{
    char *src = "Ahmet";
    
    printf("%s", ft_strdup(src));
}