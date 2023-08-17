#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    
    while(src[i] && i < n)
    {
        dest[i] = src[i];
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return(dest);
}