/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:28:23 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 00:28:23 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int a;

    a = 0;
    while(s1[a] && (s1[a] == s2[a]) && n--)
        a++;
    if(n == 0)
        return (0);
    else
        return (s1[a] - s2[a]);
}
