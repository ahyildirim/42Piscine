#include <unistd.h>
void ft_print_reverse_alphabet()
{
    char z;

    z = 'z';
    while (z < 97)
    {
        write (1, &z, 1);
        z--;
    }
}

int main()
{
    ft_print_reverse_alphabet();
}