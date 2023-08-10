char *ft_strstr(char *str, char *to_find)
{
    int a;
    int b;

    a = 0;
    while(str[a])
    {
        b = 0;
        while (str[a + b] == to_find[b] && str[a + b])
            b++;
        if(to_find[b] == '\0')
            return (str + a);
        a++;
    }
    return (0);
}

#include <stdio.h>
int main()
{
    char str[] = "Ahmet Hakan Yildirim";
    char to_find[] = "ak";

    printf("%s", ft_strstr(str, to_find));
}