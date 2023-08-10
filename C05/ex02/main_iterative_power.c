int ft_iterative_power(int nb, int power)
{
    int a;

    a = 1;
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    while (power > 0)
    {
        a *= nb;
        power--;
    }
    return (a);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_iterative_power(4, 3));
}