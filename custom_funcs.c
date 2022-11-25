#include "holberton.h"

/**
 * print_percentage - prints a percent
 * @list: arguments from _printf
 * @func: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_percentage(va_list list, param_func *func)
{
	(void)list;
	(void)func;
	_putchar('%');
	return (1);
}

/**
 * print_stringUpper - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @list: arguments from _printf
 * @func: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_stringUpper(va_list list, param_func *func)
{
	int i, count = 0;
	char *str;
	char *v_arg;

	v_arg = va_arg(list, char *);
	(void)func;
	if (!v_arg)
		return (_puts("(null)"));

	for (i = 0; v_arg[i]; i++)
	{
		if (v_arg[i] > 0 && (v_arg[i] < 32 || v_arg[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			str = convert_num(v_arg[i], 16, 0);
			if (!str[1])
				count += _putchar('0');
			count += _puts(str);
		}
		else
			count += _putchar(v_arg[i]);
	}
	return (count);
}


/**
* print_rot13 - prints a string in rot13
*@list: arguments from _printf
*@func: pointer to the struct flags in which we turn the flags on
*Return: number of char printed
*/
int print_rot13(va_list list, param_func *func)
{
	int i, index;
	int count = 0;

	char array[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(list, char *);
	(void)func;

	i = 0;
	index = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			index = str[i] - 65;
			count += _putchar(array[index]);
		}
		else
			 count += _putchar(array[i]);
		 i++;
	}
	return (count);
}
