#include <unistd.h>
#include "ft_puterr.c"
#include "display_file.c"

int	main(int ac, char **av)
{
	if (ac < 2)
		ft_puterr("File name missing.");
	else if (ac > 2)
		ft_puterr("Too many arguments.");
	else
		display_file(av[1]);
	return (0);
}