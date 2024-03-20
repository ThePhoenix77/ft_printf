#include "ft_printf.h"

/*
** ft_putuns - Function to write an unsigned integer to the standard output.
** @param n: The unsigned integer to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the unsigned integer.
*/
int ft_putuns(unsigned int n, int size)
{
    if (n >= 10)
    {
        size = ft_putuns(n / 10, size); // Recursively handle higher digits
        size = ft_putchar((n % 10) + '0', size); // Write the last digit
    }
    else
        return (ft_putchar(n + '0', size)); // Write single digit (n < 10)
    return (size); // Return the updated size
}
