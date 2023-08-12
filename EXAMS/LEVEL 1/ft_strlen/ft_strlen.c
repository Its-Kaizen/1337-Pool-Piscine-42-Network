#include <unistd.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i])
    {
        i++;
    }

    return (i);
}

int main(int argc, char **argv)
{
    int i = 0;

    while (argv[1][i])
    {
        i++;
    }

    return i;
}