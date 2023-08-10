int ft_is_prime(int nb)
{
    int a;

    a = 2;
    if (nb <= 1)
        return (0);
    while (a * a <= nb)
    {
        if((nb % a) == 0)
            return (0);
        a++;
    }
    return (1);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_is_prime(15));
}