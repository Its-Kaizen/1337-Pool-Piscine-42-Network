/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:30:35 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/11 17:30:35 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


char	*ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;

    if (to_find[j] == '\0')
        return(str);
    while (str[i])
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;
        if (to_find[j] == '\0')
            return(str + i);
        i++;
        j = 0;
    }
    return(0);
}
