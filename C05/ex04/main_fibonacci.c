int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index < 2)
        return (index);
    if (index > 46)
        return (0);
    if (index > 0)
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>
int main()
{
    printf("%d", ft_fibonacci(6));
}