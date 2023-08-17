#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;   
    }
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
    }
    ft_putchar(nbr % 10 + '0');
    
}

void	ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

}

int main(int i, int j)
{

    i = 69;
    j = 2001;

    ft_putnbr(i);
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(j);
	ft_putchar('\n');

	ft_swap(&i, &j);

	ft_putnbr(i);
	ft_putchar(',');
	ft_putchar(' ');
	ft_putnbr(j);
	ft_putchar('\n');

    return 0;
}
