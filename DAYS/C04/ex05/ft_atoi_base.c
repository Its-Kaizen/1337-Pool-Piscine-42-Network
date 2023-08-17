#include <stdio.h>

int	ft_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_spaces(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;
	int	nb2;
	int	base_length;

	nb = 0;
	i = 0;
	base_length = ft_check(base);
	if (base_length >= 2)
	{
		sign = ft_spaces(str, &i);
		nb2 = ft_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * base_length) + nb2;
			i++;
			nb2 = ft_base(str[i], base);
		}
		return (nb *= sign);
	}
	return (0);
}
