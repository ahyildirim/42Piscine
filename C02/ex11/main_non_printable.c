#include <unistd.h>

void ft_putchar(char a)
{
    write(1, &a, 1);
}

int ft_printable(char a)
{
    if (a >= 32 && a <= 126)
        return (1);
    else
        return (0);
}

void ft_putstr_non_printable(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if (ft_printable(str[a]) == 1)
            ft_putchar(str[a]);
        else
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[str[a] / 16]);
            ft_putchar("0123456789abcdef"[str[a] % 16]);
        }
        a++;
    }
}

int main()
{
    char str[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(str);
}