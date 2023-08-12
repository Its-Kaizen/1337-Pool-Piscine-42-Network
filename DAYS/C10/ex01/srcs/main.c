/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:36:15 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/12 08:36:15 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		in_to_out();
	else
	{
		while (i < ac)
		{
			if (ft_strcmp(av[i], "-") == 0)
				in_to_out();
			else
				ft_cat(av[i]);
			i++;
		}
	}
	return (0);