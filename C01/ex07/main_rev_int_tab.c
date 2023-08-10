void ft_swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void ft_rev_int_tab(int *tab, int size)
{
    int a;

    a = 0;
    while(a < (size / 2))
    {
        ft_swap(&tab[a], &tab[size - a - 1]);
        a++;
    }
}

#include <stdio.h>
int main()
{
    int tab[5] = {1, 2, 3, 4 ,5};
    int size = 5;
    ft_rev_int_tab(tab, size);

    int i = 0;
    while (i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
}