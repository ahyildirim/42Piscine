/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:44:59 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:44:59 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 32 && str[a] <= 126)
            a++;
        else
            return (0);
    }
    return (1);
}