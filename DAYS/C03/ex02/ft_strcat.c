/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:30:09 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/11 17:30:09 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;

    while(dest[i])
    {
        i++;
    }
    j = 0;
    while(src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}

int main()
{
    char dest[] = "hello ";
    char src[] = "karim";
    printf("%s", ft_strcat(dest, src));
}