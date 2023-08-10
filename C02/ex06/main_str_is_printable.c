int ft_str_is_printable(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 32 && str[a] <= 126)
            a++;
        else
            return (0);
    }
    return (1);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_str_is_printable("Ahmet05"));
}