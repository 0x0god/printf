#include "holberton.h"

/**
 *print_chars - prints a char
 *@list: list of arguments
 *@func: pointer to the struct flags in which we turn the flags on
 *Return: number of characters printed.
 */
int print_chars(va_list list, param_func *func)
{
	(void)func;
	_putchar(va_arg(list, int));
	return (1);
}

/**
 *print_strings - prints strings
 *@list: list of arguments
 *@func: pointer to the struct flags in which we turn the flags on/off
 *Return: number of characters printed
 */
int print_strings(va_list list, param_func *func)
{
	char *str;

	str = va_arg(list, char *);
	(void)func;
	if (!str)
		str = "(null)";
	return (_puts(str));
}
