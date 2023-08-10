/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:28:32 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 00:28:32 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int a;
    unsigned int b;

    a = 0;
    b = 0;
    while(dest[a])
        a++;
    while(src[b] && b < nb)
    {
        dest[a] = src[b];
        b++;
        a++;
    }
    dest[a] = '\0';
    return (dest);
}
