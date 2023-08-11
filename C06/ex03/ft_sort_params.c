/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:14:50 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 14:14:50 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

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

int ft_strcmp(char *s1, char *s2)
{
    int a;

    a = 0;
    while(s1[a])
    {
        if(s1[a] == s2[a])
            a++;
        else
            return (s1[a] - s2[a]);
    }
    return (s1[a] - s2[a]);
}

void ft_swap(char **a, char **b)
{
    char *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int ac, char **av)
{
    int control;
    int i;

    control = 0;
    while (control < ac - 1)
    {
        i = 1;
        while (i < ac - 1)
        {
            if(ft_strcmp(av[i], av[i + 1]) > 0)
                ft_swap(&av[i], &av[i + 1]);
            i++;
        }
        control++;
    }

    i = 1;
    while(i < ac)
    {
        ft_putstr(av[i]);
        write(1, "\n", 1);
        i++;
    }
}