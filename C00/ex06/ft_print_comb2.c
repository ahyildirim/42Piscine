/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:05:53 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:05:53 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print_comb2(void)
{
    int num1;
    int num2;

    num1 = '0';
    while(num1 <= 99)
    {
        num2 = num1 + 1;
        while(num2 <= 99)
        {
            ft_putchar((num1 / 10) + '0');
            ft_putchar((num1 % 10) + '0');
            ft_putchar(' ');
            ft_putchar((num2 / 10) + '0');
            ft_putchar((num2 % 10) + '0');

            if(num1 != 98)
                write(1, ", ", 2);
            num2++;
        }
        num1++;
    }
}

