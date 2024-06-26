/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:38:33 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:38:33 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= '1' && str[a] <= '9')
            a++;
        else
            return (0);
    }
    return (1);
}