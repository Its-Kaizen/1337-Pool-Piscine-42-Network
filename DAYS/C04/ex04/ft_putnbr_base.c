#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-'
				|| base[j] == '+' || base[j] == '-' || base[i] <= ' '
				|| base[i] > 126 || base[j] <= ' ' || base[j] > 126)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{	
	long int	nb;

	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	nb = (long int)nbr;
	if (!ft_check(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb != 0)
	{
		if (nb / ft_strlen(base) != 0)
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}
