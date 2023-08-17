#include <stdlib.h>
#include <stdio.h>

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_strflength(char **strings, int size, int sep_length)
{
	int	final_length;
	int	i;

	final_length = 0;
	i = 0;
	while (i < size)
	{
		final_length += ft_strlength(strings[i]);
		final_length += sep_length;
		i++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		i;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_strflength(strs, size, ft_strlength(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	if (!string)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(string, strs[i]);
		string += ft_strlength(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_strlength(sep);
		}
		i++;
	}
	*string = '\0';
	return (string - full_length);
}