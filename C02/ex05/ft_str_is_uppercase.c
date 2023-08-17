#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;

    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return(0);
    }
    return(1);
}

int	main()
{
	printf("%d", ft_str_is_uppercase("ABdDCDEE"));
        printf("\n%d", ft_str_is_uppercase("abcAdefghijkl"));
        printf("\n%d", ft_str_is_uppercase("-_134556efSghij67"));
}