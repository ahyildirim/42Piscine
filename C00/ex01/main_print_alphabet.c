#include <unistd.h>

void ft_print_alphabet()
{
    char a;

    a = 'a';
    while (a > 122)
    {
        write(1, &a, 1);
        a++;
    }
}

int main()
{
    ft_print_alphabet();
}