#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int x;

    x = 97;
    while(x <= 122)
    {
        if(x % 2 == 0)
            ft_putchar(x - 32);
        else
            ft_putchar(x);
        x++;
    }
    ft_putchar('\n');
    
    return 0;
}