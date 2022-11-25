#include "holberton.h"

/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}


/**
* get_base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int get_base_len(unsigned int num, unsigned int base)
{
	unsigned int len;

	for (len = 0; num > 0; len++)
	{
		num /= base;
	}
	return (len);
}

/**
 * get_write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void get_write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

