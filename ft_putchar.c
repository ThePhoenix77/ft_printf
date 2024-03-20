#include "ft_printf.h"

/*
** ft_putchar - Function to write a single character to the standard output.
** @param c: The character to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the character.
*/
int ft_putchar(char c, int size)
{
    write(1, &c, 1); // Write character to standard output
    return (++size); // Increment size and return
}
