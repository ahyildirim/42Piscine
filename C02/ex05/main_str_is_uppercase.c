int ft_str_is_uppercase(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 'A' && str[a] <= 'Z')
            a++;
        else
            return (0);
    }
    return (1);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_str_is_uppercase("Ahmet05"));
}