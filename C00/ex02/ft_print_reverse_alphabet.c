/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:05:30 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:05:30 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_reverse_alphabet()
{
    char z;

    z = 'z';
    while (z < 97)
    {
        write (1, &z, 1);
        z--;
    }
}