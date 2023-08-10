/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:36:59 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 01:36:59 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int a;

    a = 1;
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    if (nb > 0 && nb < 13)
    {
        a = a * (nb - 1);
        return (a);
    }
    return (0);
}