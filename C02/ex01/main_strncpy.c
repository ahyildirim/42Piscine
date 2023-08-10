char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int a;

    a = 0;
    while(src[a] && a < n)
    {
        dest[a] = src[a];
        a++;
    }
    if(a < n)
        dest[a] = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
    char dest[] = "Ahmet";
    char src[] = "Hakan";

    printf("%s", ft_strncpy(dest, src, 3));
}