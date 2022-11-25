#include "holberton.h"

/**
 * print_num - prints a number send to this function
 * @n: number to be printed
 * Return: The number of arguments printed
 */
void print_num(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;
	if (n1 / 10)
		print_num(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * convert_num - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert_num(unsigned long int num, int base, int lowercase)
{
	static char *array;
	static char buffer[50];
	char *str_lowercase;
	char *str_uppercase;
	char *ptr;

	str_lowercase = "0123456789abcdef";

	str_uppercase = "0123456789ABCDEF";

	array = (lowercase)
		? str_lowercase
		: str_uppercase;
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = array[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}

/**
 * get_digits - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int get_digits(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
