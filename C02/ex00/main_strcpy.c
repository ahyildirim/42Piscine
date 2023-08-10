char *ft_strcpy(char *dest, char *src)
{
    int a;

    a = 0;
    while(src[a])
    {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
    char dest[] = "Ahmet";
    char src[] = "Hakan";

    printf("%s", ft_strcpy(dest, src));
}