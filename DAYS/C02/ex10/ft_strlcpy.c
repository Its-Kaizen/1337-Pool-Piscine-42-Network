#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int len_src;
    unsigned int i;

    len_src = 0;
    i = 0;

    while (src[i])
    {
        len_src++;
        i++;
    }
    if (size == 0)
        return (len_src);
    i = 0;
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (len_src);
}