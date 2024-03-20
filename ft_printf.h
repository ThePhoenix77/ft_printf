#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> // Include for write() function
# include <stdarg.h> // Include for va_list type

/*
** ft_printf - Custom printf function supporting various format specifiers.
** @param format: The format string.
** @return: The number of characters printed (excluding the null byte used to end the output to strings).
**          Returns -1 on error.
*/
int ft_printf(const char *format, ...);

/*
** ft_putchar - Function to write a single character to the standard output.
** @param c: The character to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the character.
*/
int ft_putchar(char c, int size);

/*
** ft_putstr - Function to write a string to the standard output.
** @param s: The string to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the string.
*/
int ft_putstr(char *s, int size);

/*
** ft_putpoint - Function to write a pointer address to the standard output.
** @param p: The pointer to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the pointer.
*/
int ft_putpoint(void *p, int size);

/*
** ft_putint - Function to write an integer to the standard output.
** @param c: The integer to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the integer.
*/
int ft_putint(int c, int size);

/*
** ft_putuns - Function to write an unsigned integer to the standard output.
** @param u: The unsigned integer to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the unsigned integer.
*/
int ft_putuns(unsigned int u, int size);

/*
** ft_puthex - Function to write a hexadecimal number to the standard output.
** @param p: The hexadecimal number to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the hexadecimal number.
*/
int ft_puthex(unsigned int p, int size);

/*
** ft_puthexup - Function to write a hexadecimal number (in uppercase) to the standard output.
** @param p: The hexadecimal number to be written.
** @param size: The current size of the output.
** @return: The updated size after writing the hexadecimal number.
*/
int ft_puthexup(unsigned int p, int size);

#endif
