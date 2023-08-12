/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_to_stdout.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:36:31 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/12 08:36:31 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

void	in_to_out(void)
{
	char	c;

	while (read(0, &c, 1))
		ft_putchar(c);
}