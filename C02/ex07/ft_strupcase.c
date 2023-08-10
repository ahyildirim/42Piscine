/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:55:32 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:55:32 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 'a' && str[a] <= 'z')
            str[a] -= 32;
        a++;
    }
    return (str);
}