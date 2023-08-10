char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int a;
    unsigned int b;

    a = 0;
    b = 0;
    while(dest[a])
        a++;
    while(src[b] && b < nb)
    {
        dest[a] = src[b];
        b++;
        a++;
    }
    dest[a] = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
    char dest[] = "Ahmet";
    char src[] = " Hakan";

    printf("%s",  ft_strncat(dest, src, 3));
}