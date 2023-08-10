/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:41:23 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:41:23 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 'A' && str[a] <= 'Z')
            a++;
        else
            return (0);
    }
    return (1);
}