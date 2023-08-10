unsigned int ft_strlen(char *str)
{
    int a;

    a = 0;
    while(str[a])
        a++;
    return (a);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int a;
    unsigned int b;
    unsigned int len;

    a = 0;
    b = 0;

    while (dest[a])
        a++;
    while (src[b] && b < size - 1)
    {
        dest[a] = src[b];
        b++;
        a++;
    }
    dest[a] = '\0';
    len = ft_strlen(dest);
    return (len);
}

#include <stdio.h>
int main()
{
    char dest[] = "Ahmet";
    char src[] = " Hakan";

    printf("%d\n%s\n", ft_strlcat(dest, src, 5), dest);
}