#include "ft_printf.h"

/*
** ft_puthex - Function to write a hexadecimal number to the standard output.
** @param p: The hexadecimal number to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the hexadecimal number.
*/
int ft_puthex(unsigned int p, int size)
{
    char *base; // Array to store hexadecimal characters

    base = "0123456789abcdef"; // Define hexadecimal characters
    if (p >= 16)
    {
        size = ft_puthex(p / 16, size); // Recursively handle higher digits
        size = ft_putchar(base[p % 16], size); // Write the remainder (current digit)
    }
    else
        size = ft_putchar(base[p], size); // Write single digit (p < 16)
    return (size); // Return the updated size
}
