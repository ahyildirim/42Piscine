/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:14:38 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 14:14:38 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int a;

    a = 0;
    while(av[0][a] && ac)
    {
        write(1, &av[0][a], 1);
        a++;
    }
    write (1, "\n", 1);
}