#include "ft_printf.h"

/*
** ft_putstr - Function to write a string to the standard output.
** @param s: The string to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the string.
*/
int ft_putstr(char *s, int size)
{
    if (s == NULL)
        return (ft_putstr("(null)", size)); // If string is NULL, write "(null)"
    while (*s)
    {
        size = ft_putchar(*s, size); // Write each character of the string
        s++;
    }
    return (size); // Return the updated size
}
