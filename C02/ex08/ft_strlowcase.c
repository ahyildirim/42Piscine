/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:55:26 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:55:26 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 'A' && str[a] <= 'Z')
            str[a] += 32;
        a++;
    }
    return (str);
}