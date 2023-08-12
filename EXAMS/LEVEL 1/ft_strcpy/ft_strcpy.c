#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;

    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\n';

    return (s1);
}