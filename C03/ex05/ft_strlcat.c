/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:28:42 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 00:28:42 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char *str)
{
    int a;

    a = 0;
    while(str[a])
        a++;
    return (a);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int a;
    unsigned int b;
    unsigned int len;

    a = 0;
    b = 0;

    while (dest[a])
        a++;
    while (src[b] && b < size - 1)
    {
        dest[a] = src[b];
        b++;
        a++;
    }
    dest[a] = '\0';
    len = ft_strlen(dest);
    return (len);
}
