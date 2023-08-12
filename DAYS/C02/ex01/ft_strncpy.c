/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:18:01 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/11 17:18:01 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    
    while(src[i] && i < n)
    {
        dest[i] = src[i];
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return(dest);
}