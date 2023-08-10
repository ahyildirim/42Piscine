char *ft_strlowcase(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 'A' && str[a] <= 'Z')
            str[a] += 32;
        a++;
    }
    return (str);
}

#include <stdio.h>
int main()
{
    char str[] = "AhmeT";
    printf("%s", ft_strlowcase(str));
}