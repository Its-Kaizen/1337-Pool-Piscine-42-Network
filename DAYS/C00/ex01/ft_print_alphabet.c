#include <unistd.h>

void	ft_print_alphabet(void)
{
    int x;
    x = 'a';

    while (x <= 'z')
    {
        write(1, &x, 1);
        x++;
    }   
}