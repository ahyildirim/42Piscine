/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyildir <ahyildir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:18:06 by ahyildir          #+#    #+#             */
/*   Updated: 2023/08/10 19:18:06 by ahyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    int a;

    a = 0;
    while(str[a])
    {
        if(str[a] >= 'A' && str[a] <= 'Z')
            str[a] += 32;
        a++;
    }
    return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	control;

	a = 0;
	control = 1;
	ft_strlowcase(str);
	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (control == 1)
				str[a] -= 32;
			control = 0;
		}
		else if (str[a] >= '0' && str[a] <= '9')
			control = 0;
		else
			control = 1;
        a++;
	}
	return (str);
}