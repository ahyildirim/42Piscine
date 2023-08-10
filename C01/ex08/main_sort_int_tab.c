void ft_swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void ft_sort_int_tab(int *tab, int size)
{
    int a;
    int b;

    a = 0;
    while(a < size -1)
    {
        b = 0;
        while (b < size - 1)
        {
            if(tab[b] > tab[b + 1])
                ft_swap(&tab[b], &tab[b + 1]);
            b++;
        }
        a++;
    }
}

#include <stdio.h>
int main()
{
    int tab[5] = {5, 2, 8, 6, 4};
    int size = 5;
    ft_sort_int_tab(tab, size);

    int i = 0;
    while (i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
}