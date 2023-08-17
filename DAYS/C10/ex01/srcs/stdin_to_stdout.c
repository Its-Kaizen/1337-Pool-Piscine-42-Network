#include "../includes/ft_cat.h"

void	in_to_out(void)
{
	char	c;

	while (read(0, &c, 1))
		ft_putchar(c);
}