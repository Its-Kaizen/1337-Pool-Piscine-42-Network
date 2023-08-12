#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int x;

    x = 122;

    while (x >= 97)
    {
       if (x % 2 == 0)
        ft_putchar(x);
        else
        ft_putchar(x - 32);
        x--;
    }
    return 0;
}