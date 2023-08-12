#include <unistd.h>

void    ft_printnbr(int i)
{
    if (i >= 10)
        ft_printnbr(i / 10);
    i = (i % 10 + '0');
    write(1, &i, 1);
}

int main(void)
{
    int nbr;

    nbr = 1;

    while(nbr <= 100)
    {
        if ((nbr % 3 == 0) && (nbr % 5 == 0))
            write(1, "fizzbuzz", 8);
        else if (nbr % 3 == 0)
            write(1, "fizz", 4);
        else if (nbr % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_printnbr(nbr);
        write(1, "\n", 1);
        nbr++;
    }
    return 0;
}