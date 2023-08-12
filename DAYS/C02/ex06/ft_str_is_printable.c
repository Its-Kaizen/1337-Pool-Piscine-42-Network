/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:18:55 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/11 17:18:55 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
    int i;

    i = 0;

    while(str[i])
    {
        if (str[i] >= 31 && str[i] <= 126)
            i++;
        else
            return(0);
    }
    return(1);
}

int	main()
{
	printf("%d", ft_str_is_printable("ABdDCDEE"));
    printf("\n%d", ft_str_is_printable("abcAdefghijkl"));
    printf("\n%d", ft_str_is_printable("-_134556efSghij67"));
}