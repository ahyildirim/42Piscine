char *ft_strcat(char *dest, char *src)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while(dest[a])
        a++;
    while(src[b])
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

    printf("%s",  ft_strcat(dest, src));
}