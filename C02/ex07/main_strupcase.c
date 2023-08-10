char *ft_strupcase(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 'a' && str[a] <= 'z')
            str[a] -= 32;
        a++;
    }
    return (str);
}

#include <stdio.h>
int main()
{
    char str[] = "AhmeT";
    printf("%s", ft_strupcase(str));
}