/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:02:50 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:02:50 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

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