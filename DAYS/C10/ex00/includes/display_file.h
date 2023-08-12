/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:29:24 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/12 08:29:24 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
#define DISPLAY_FILE_H

#include <unistd.h>
#include <fcntl.h>

void	ft_puterr(char *err);
void	display_file(char *file);

#endif