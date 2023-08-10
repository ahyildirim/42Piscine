/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:06:00 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:06:00 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == 2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        write(1, "147483648", 10);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar (nb + '0');
}
