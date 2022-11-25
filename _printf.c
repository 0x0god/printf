#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: Input character string.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				print_buffer(buffer, ibuf), free(buffer), va_end(arguments);
				return (-1);
			}
			else
			{
				function = get_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					cat_buffer(buffer, format[i], ibuf), len++, i--;
				} else
				{
					len += function(arguments, buffer, ibuf);
					i += ev_print_func(format, i + 1);
				}
			} i++;
		} else
			cat_buffer(buffer, format[i], ibuf), len++;
		for (ibuf = len; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_buffer(buffer, ibuf), free(buffer), va_end(arguments);
	return (len);
}
