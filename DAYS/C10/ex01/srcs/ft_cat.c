/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:35:10 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/12 08:35:10 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"
#include <string.h>

void	ft_cat(char *file_name)
{
	int		fd;
	char	buf[29000];
	int		ret;

	errno = 0;
	fd = open(file_name, O_RDWR);
	if (errno)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(basename(file_name));
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		write(1, "\n", 1);
		return ;
	}	
	ret = read(fd, buf, 29000);
	write(1, buf, ret);
	close(fd);
}