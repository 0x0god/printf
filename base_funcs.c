#include "holberton.h"

/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * @func: pointer to the struct flags in which we turn the flags on
 * Return: The length of the number printed
 */
int print_binary(va_list list, param_func *func)
{
	unsigned int binary_num;
	char *str;

	binary_num = va_arg(list, unsigned int);
	str = convert_num(binary_num, 2, 0);
	(void)func;
	return (_puts(str));
}

/**
 * print_hexa - print an hexadecimal number
 * @list: the number passed
 * @func: pointer to the struct flags in which we turn the flags on
 * Return: the length of number printed
 */

int print_hexa(va_list list, param_func *func)
{
	unsigned int hex_num = va_arg(list, unsigned int);
	char *hex_string = convert_num(hex_num, 16, 10);
	int i = 0;

	if (func->hash_flag == 1 && hex_string[0] != '0')
		i += _puts("0x");
	i += _puts(hex_string);
	return (i);
}

/**
 * print_octal - print a number converted in octal
 * @list: the argument received
 * @func: pointer to the struct flags in which we turn the flags on
 * Return: the length of printed in console
 */
int print_octal(va_list list, param_func *func)
{
	unsigned int num;
	int len;
	char *oct_rep;

	num = va_arg(list, unsigned int);
	oct_rep = convert_num(num, 8, 10);
	len = 0;

	if (func->hash_flag == 1 && oct_rep[0] != '0')
		len += _putchar('0');
	len += _puts(oct_rep);
	return (len);
}

/**
 * print_heX - prints a number in hexadecimal base,
 * in uppercase
 * @list: va_list arguments from _printf
 * @func: pointer to the struct flags in which we turn the flags on
 * Return: the length of printed in console
 */
int print_heX(va_list list, param_func *func)
{
	unsigned int hex_num = va_arg(list, unsigned int);
	char *heX_string = convert_num(hex_num, 16, 10);
	int i = 0;

	if (func->hash_flag == 1 && heX_string[0] != '0')
		i += _puts("0X");
	i += _puts(heX_string);
	return (i);
}
