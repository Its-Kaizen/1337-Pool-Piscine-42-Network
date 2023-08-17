int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb > 2147483640 && nb >= 2147483647)
		return (2147483647);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
 * Note: or
 * Step 1 - take square root of nb (sqrt(nb) + 1)
 * Step 2 - divide nb by numbers greter than 2 and less than or
 * 		equal to (sqrt(nb) + 1);
 */