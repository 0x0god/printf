#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static char buf[1024];
	static int pos;

	if (c == -1 || pos >= 1024)
	{
		write(1, buf, pos);
		pos = 0;
	}
	if (c != -1)
	{
		buf[pos] = c;
		pos++;
	}
	return (1);
}

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
	register int count;

	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);
	return (count);
}

