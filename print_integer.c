#include "main.h"

/**
 * print_integer - prints an integer.
 * @arguments: input string.
 * @buf: pointer to buffer.
 * @ibuf: index for buffer pointer.
 * Return: number of chars printed.
 */

int print_integer(va_list arguments, char *buf, unsigned int ibuf)
{
	int input;
	unsigned int int_in, int_temp, i, div, isneg;

	input = va_arg(arguments, int);
	isneg = 0;
	if (input < 0)
	{
		int_in = input * -1;
		ibuf = cat_buffer(buf, '-', ibuf);
		isneg = 1;
	}
	else
	{
		int_in = input;
	}

	int_temp = int_in;
	div = 1;

	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = cat_buffer(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i + isneg);

}
