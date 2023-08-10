#include <unistd.h>

void ft_putstr(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        write(1, &str[a], 1);
        a++;
    }
}

int main()
{
    ft_putstr("STDOUT");
}