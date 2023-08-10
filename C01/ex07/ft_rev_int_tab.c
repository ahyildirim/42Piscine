/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:57:09 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 17:57:09 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

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