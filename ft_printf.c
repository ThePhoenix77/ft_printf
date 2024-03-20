#include "ft_printf.h"

/*
** ft_choice - Function to handle formatting choices and call corresponding functions.
** @param format: The format string.
** @param args: The va_list of arguments.
** @param index: The index of the current character in the format string.
** @param size: The current size of the output.
** @return: The updated size after handling the format choice.
*/
static int ft_choice(const char *format, va_list args, int index, int size)
{
    if (format[index] == 'c')
        return (ft_putchar(va_arg(args, int), size));
    else if (format[index] == 's')
        return (ft_putstr(va_arg(args, char *), size));
    else if (format[index] == 'p')
        return (ft_putpoint(va_arg(args, void *), size));
    else if (format[index] == 'd' || format[index] == 'i')
        return (ft_putint(va_arg(args, int), size));
    else if (format[index] == 'u')
        return (ft_putuns(va_arg(args, unsigned int), size));
    else if (format[index] == 'x')
        return (ft_puthex(va_arg(args, unsigned int), size));
    else if (format[index] == 'X')
        return (ft_puthexup(va_arg(args, unsigned int), size));
    else if (format[index] == '%')
        return (ft_putchar('%', size));
    else if (format[index])
        return (ft_putchar(format[index], size));
    return (size);
}

/*
** ft_printf - Custom printf function supporting various format specifiers.
** @param format: The format string.
** @return: The number of characters printed (excluding the null byte used to end the output to strings).
**          Returns -1 on error.
*/
int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int size;

    i = 0;
    size = 0;
    if (!format || (write(1, "", 0)) == -1) // Check for null format or error in writing
        return (-1); // Return -1 on error
    va_start(args, format); // Initialize the va_list
    while (format[i] != '\0')
    {
        if (format[i] == '%') // Check for format specifier
        {
            i++;
            if (!format[i]) // If '%' is the last character
                break; // Exit loop
            size = ft_choice(format, args, i, size); // Handle format choice
        }
        else
            size = ft_putchar(format[i], size); // Handle non-format characters
        i++;
    }
    va_end(args); // Clean up the va_list
    return (size); // Return the total size of output
}
