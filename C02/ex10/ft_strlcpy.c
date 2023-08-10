/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:35:03 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 19:35:03 by ahyildir         ###   ########.tr       */
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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int a;

    a = 0;
    if(size != 0)
    {
        while(src[a] && a < size - 1)
        {
            dest[a] = src[a];
            a++;
        }
        dest[a] = '\0';
    }
    return (ft_strlen(src));
}