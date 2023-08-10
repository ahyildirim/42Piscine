/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:44:17 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 00:44:17 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int a;
    int sign;
    int result;
    
    a = 0;
    sign = 1;
    while((str[a] >= 9 && str[a] <= 13) || str[a] == 32)
        a++;
    while(str[a] == '-' || str[a] == '+')
    {
        if(str[a] == '-')
            sign *= -1;
        a++;
    }
    while (str[a] >= '0' && str[a] <= '9')
     {
        result = result * 10 + str[a] - 48;
        a++;
    }
    return (result * sign);
}