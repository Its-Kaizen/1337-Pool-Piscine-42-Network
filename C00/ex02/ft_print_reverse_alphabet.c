#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
    char x;
    x = 'z';

    while (x >= 'a')
    {
        write(1, &x, 1);
        x--;
    }
}