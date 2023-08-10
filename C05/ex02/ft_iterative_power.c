/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:37:09 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 01:37:09 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int a;

    a = 1;
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    while (power > 0)
    {
        a *= nb;
        power--;
    }
    if (a > 2147483647)
        return (0);
    return (a);
}
