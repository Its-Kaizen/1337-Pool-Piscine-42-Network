/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:44:35 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/11 17:44:35 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
    int result;

    result = 1;

    while (nb > 0)
    {
        result *= nb;
        nb--;
    }
    if (nb < 0)
    {
        return(0);
    }
    return(result);
}

int main(void)
{
    printf("%i", ft_iterative_factorial(5));
}