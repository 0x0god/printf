#include "main.h"

/**
 * cat_buffer -concatenates the buffer characters.
 * @buf: pointer to buffer.
 * @c: character to concatenate.
 * @ibuf: index of pointer to buffer.
 * Return: Index of pointer to buffer.
 */

unsigned int cat_buffer(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buffer(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
