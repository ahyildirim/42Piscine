int ft_sqrt(int nb)
{
    int a;
    
    a = 0;
    while (a * a <= nb)
    {
        if (a * a == nb)
            return (a);
        a++;
    }
    return (0);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_sqrt(24));
}