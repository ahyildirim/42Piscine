/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:32:42 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 00:32:42 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int a;

    a = 0;
    while(str[a])
        a++;
    return (a);
}