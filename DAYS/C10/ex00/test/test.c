/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:32:05 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/12 08:32:05 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char 	b[30];

	write(1, "Enter your text: ", 17);
	read(0, b, 30);
	write(1, "You Entered: ", 17);
	write(1, b, 30);
	return (0);
	return (0);
}