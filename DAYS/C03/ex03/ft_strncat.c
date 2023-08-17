#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    while(dest[i])
    {
        i++;
    }
    j = 0;
    while(j < nb && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
