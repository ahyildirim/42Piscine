/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:30:31 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 18:30:31 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int a;

    a = 0;
    while(src[a] && a < n)
    {
        dest[a] = src[a];
        a++;
    }
    if(a < n)
        dest[a] = '\0';
    return (dest);
}