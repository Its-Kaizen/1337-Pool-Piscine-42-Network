/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:59:36 by abmouhou          #+#    #+#             */
/*   Updated: 2023/07/17 15:01:47 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (x == 1)
				str[i] -= 32;
			x = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			x = 0;
		else
			x = 1;
		i++;
	}
	return (str);
}