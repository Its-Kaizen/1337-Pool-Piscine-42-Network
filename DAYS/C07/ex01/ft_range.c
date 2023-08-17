#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*range;

	i = 0;
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
