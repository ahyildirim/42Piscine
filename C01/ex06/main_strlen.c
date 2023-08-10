int ft_strlen(char *str)
{
    int a;

    a = 0;
    while(str[a])
        a++;
    return (a);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_strlen("AHMET"));
}