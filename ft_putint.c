#include "ft_printf.h"

/*
** ft_putint - Function to write an integer to the standard output.
** @param c: The integer to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the integer.
*/
int ft_putint(int c, int size)
{
    long n; // Variable to store the integer

    n = c; // Assign integer to a long variable
    if (n == 0)
        return (ft_putchar('0', size)); // If integer is 0, write '0' and return
    if (n < 0)
    {
        n *= -1; // Make the integer positive
        ft_putchar('-', size); // Write negative sign
        size++; // Increment size
    }
    if (n >= 10)
    {
        size = ft_putint(n / 10, size); // Recursively handle higher digits
        size = ft_putchar((n % 10) + '0', size); // Write the last digit
    }
    else
    {
        return (ft_putchar((n % 10) + '0', size)); // Write single digit (n < 10)
    }
    return (size); // Return the updated size
}
