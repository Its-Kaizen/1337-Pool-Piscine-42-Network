#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(int i)
{
    if (i >= 10)
        ft_print_numbers(i / 10);
    ft_putchar((i % 10) + '0');

}

int	ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    // Declare a pointer to a string literal "karim"
    char *c = "younes";

    // Call ft_strlen with the string and store the result in the variable length
    int length = ft_strlen(c);

    // Declare a character array to store the string representation of the length
    char len_str[16];

    // Initialize an index variable to 0
    int i = 0;

    // Convert the length to a string representation using a loop that extracts the last digit and adds it to the array
    while (length > 0)
    {
        len_str[i++] = (length % 10) + '0';
        length /= 10;
    }

    // Print the string representation of the length in reverse order using a loop
    while (--i >= 0)
    {
        ft_putchar(len_str[i]);
    }

    // Print a newline character to separate the outputs
    ft_putchar('\n');


    // End the program by returning 0 to indicate success
    return 0;
}