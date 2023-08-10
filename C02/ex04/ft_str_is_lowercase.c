/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:40:26 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:40:26 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 'a' && str[a] <= 'z')
            a++;
        else
            return (0);
    }
    return (1);
}