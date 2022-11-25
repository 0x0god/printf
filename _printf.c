#include "holberton.h"

/**
 *_printf - Print a formatted string
 *@format: format string
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int (*print_function)(va_list, param_func *);
	va_list list;
	const char *pointer;
	param_func flags = {0, 0, 0};

	register int count = 0;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (pointer = format; *pointer; pointer++)
	{
		if (*pointer == '%')
		{
			pointer++;
			if (*pointer == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flags(*pointer, &flags))
				pointer++;
			print_function = func_parse(*pointer);
			count += (print_function)
						 ? print_function(list, &flags)
						 : _printf("%%%c", *pointer);
		}
		else
			count += _putchar(*pointer);
	}
	_putchar(-1);
	va_end(list);
	return (count);
}
