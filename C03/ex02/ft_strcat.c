/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:02:33 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 00:02:33 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while(dest[a])
        a++;
    while(src[b])
    {
        dest[a] = src[b];
        b++;
        a++;
    }
    dest[a] = '\0';
    return (dest);
}
