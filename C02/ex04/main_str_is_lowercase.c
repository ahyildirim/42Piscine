int ft_str_is_lowercase(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 'a' && str[a] <= 'z')
            a++;
        else
            return (0);
    }
    return (1);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_str_is_lowercase("Ahmet05"));
}