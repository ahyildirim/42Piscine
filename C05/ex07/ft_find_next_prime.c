/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:37:34 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 01:37:34 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int a;

    a = 2;
    if (nb <= 1)
        return (0);
    while (a * a <= nb)
    {
        if((nb % a) == 0)
            return (0);
        a++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (ft_is_prime(nb) == 1)
        return (nb);
    else
        ft_find_next_prime(nb + 1);
}
