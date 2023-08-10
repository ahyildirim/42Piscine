void ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

#include <stdio.h>
int main()
{
    int a = 14;
    int b = 5;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    printf("%d, %d", div, mod);
}