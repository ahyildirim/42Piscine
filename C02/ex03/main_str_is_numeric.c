int ft_str_is_numeric(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= '1' && str[a] <= '9')
            a++;
        else
            return (0);
    }
    return (1);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_str_is_numeric("Ahmet05"));
}