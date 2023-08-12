/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:33:22 by abmouhou          #+#    #+#             */
/*   Updated: 2023/08/11 17:33:22 by abmouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr('147483648');
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
        ft_putnbr(nb);
    }
    if (nb > 9)
    {
        ft_putnbr(nb /10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + 48);

}
