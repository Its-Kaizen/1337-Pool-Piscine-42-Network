/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:19:05 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/11 17:19:05 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
    int i;

    i = 0;

    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
        i++;
    }
    return(str);
}