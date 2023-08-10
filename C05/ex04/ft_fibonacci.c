/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:37:18 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/11 01:37:18 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index < 2)
        return (index);
    if (index > 46)
        return (0);
    if (index > 0)
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
