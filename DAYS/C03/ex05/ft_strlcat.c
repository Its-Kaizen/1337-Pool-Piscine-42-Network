#include <stdio.h>

int 	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return(i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int dlen;
	int slen;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size < dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
