#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(int n)
{
	if (n >= 10)
		ft_print_numbers(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
    *div = a /  b;
    *mod = a % b;
    }
}

int main(){
    
    int a = 40;
    int b = 5;
    int x;
    int y;

    ft_div_mod(a, b, &x, &y);


    ft_putchar('a');
    ft_putchar(' ');
    ft_print_numbers(a);
    
    ft_putchar('\n');

    ft_putchar('b');
    ft_putchar(' ');
    ft_print_numbers(b);

    ft_putchar('\n');

    ft_putchar('x');
    ft_putchar(' ');
    ft_print_numbers(x);
 
    ft_putchar('\n');

    ft_putchar('y');
    ft_putchar(' ');
    ft_print_numbers(y);


    return 0;
}