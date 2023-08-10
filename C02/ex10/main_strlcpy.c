unsigned int ft_strlen(char *str)
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

#include <stdio.h>
int main()
{
    char dest[] = "Ahmet";
    char src[] = "Hakan";

    printf("%d\n%s", ft_strlcpy(dest, src, 6), dest);
}