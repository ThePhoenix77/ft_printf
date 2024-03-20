#include "ft_printf.h"

/*
** ft_puthexa - Helper function to write a hexadecimal number to the standard output.
** @param p: The hexadecimal number to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the hexadecimal number.
*/
static int ft_puthexa(unsigned long long p, int size)
{
    char *base; // Array to store hexadecimal characters

    base = "0123456789abcdef"; // Define hexadecimal characters
    if (p >= 16)
    {
        size = ft_puthexa(p / 16, size); // Recursively handle higher digits
        size = ft_putchar(base[p % 16], size); // Write the remainder (current digit)
    }
    else
        size = ft_putchar(base[p], size); // Write single digit (p < 16)
    return (size); // Return the updated size
}

/*
** ft_putpoint - Function to write a pointer address to the standard output.
** @param p: The pointer to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the pointer.
*/
int ft_putpoint(void *p, int size)
{
    if (!p)
        size = ft_putstr("0x0", size); // If pointer is NULL, write "0x0"
    else
    {
        size = ft_putstr("0x", size); // Write "0x" prefix
        size = ft_puthexa((unsigned long long)p, size); // Write hexadecimal address
    }
    return (size); // Return the updated size
}
