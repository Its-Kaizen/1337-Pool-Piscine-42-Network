/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:29:57 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/12 08:29:57 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>


void	display_file(char *file_name)
{
	int	fd;
	char buf;

	fd = open(file_name, O_RDONLY);
	if (fd > 0)
		while (read(fd, &buf, 1))
			write(1, &buf, 1);
	close(fd);
}