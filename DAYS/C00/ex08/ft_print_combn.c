/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 16:52:48 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/11 16:52:48 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combn(char	*num, int	num_size,	int	index,	char	digit)
{
	if (index == num_size)
	{
		write(1, num, num_size);
		if (num[0] - '0' < 10 - num_size)
			write(1, ", ", 2);
	}
	else
	{
		while (digit - '0' <= (10 - num_size) + index)
		{
			num[index] = digit;
			print_combn(num, num_size, index + 1, digit + 1);
			digit++;
		}
	}
}

void	ft_print_combn(int	n)
{
	char	num[9];

	if (n > 0 && n < 10)
		print_combn(num, n, 0, '0');
}

int	main(void)
{
	ft_print_combn(5);
}