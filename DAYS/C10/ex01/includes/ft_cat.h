/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:33:28 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/12 08:33:28 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

#include <fcntl.h>
#include <libgen.h>
#include <sys/errno.h>
#include <stdio.h>
#include <unistd.h>

void	in_to_out(void);
int	ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_cat(char *file_name);

#endif