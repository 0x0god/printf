#include "main.h"

/**
 * print_buffer - prints buffer.
 * @buf: pointer to buffer.
 * @nbuf: number of bytes to be printed.
 * Return: number of bytes printed.
 */

int print_buffer(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
