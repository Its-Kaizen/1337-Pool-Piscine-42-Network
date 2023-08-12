/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:17:49 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/11 17:17:49 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*ft_strcpy(char *dest, char *src)
{
        int i;

        i = 0;

        while(src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
        return(dest);
}