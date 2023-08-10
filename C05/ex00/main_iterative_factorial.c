int ft_iterative_factorial(int nb)
{
    int a;

    a = 1;
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    while (nb > 0 && nb < 13)
    {
        while(nb > 0)
        {
            a = a * nb;
            nb--;
        }
        return (a);
    }
    return (0);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_iterative_factorial(14));
}