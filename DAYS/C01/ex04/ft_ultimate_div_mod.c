#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(int n)
{
    if (n >= 10)
        ft_print_numbers(n / 10);
    ft_putchar((n % 10) + '0');
}

void	ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = *a / *b;
    *b = *a % *b;
    *a = tmp;
}

int main()
{

    int a = 12;
    int b = 6;
    int *pa = &a;
    int *pb = &b;
    
    ft_ultimate_div_mod(pa, pb);

    ft_putchar('a');
    ft_putchar(' ');
    ft_putchar(a + 48);

    ft_putchar('\n');

    ft_putchar('b');
    ft_putchar(' ');
    ft_putchar(b + 48);

    ft_putchar('\n');


    return 0;
}
