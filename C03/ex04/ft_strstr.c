/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:28:37 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 00:28:37 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int a;
    int b;

    a = 0;
    while(str[a])
    {
        b = 0;
        while (str[a + b] == to_find[b] && str[a + b])
            b++;
        if(to_find[b] == '\0')
            return (str + a);
        a++;
    }
    return (0);
}