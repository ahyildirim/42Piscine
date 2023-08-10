/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:37:13 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 01:37:13 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    if (power > 0)
    {
		if (nb > 2147483647)
			return (0);
        return (nb * ft_recursive_power(nb, power - 1));
    }
}
