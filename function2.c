#include "main.h"

#define BUFFER_SIZE 1024
static int index;
char buffer[BUFFER_SIZE];
/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{


	index = 0;

	if (index == BUFFER_SIZE)
	{
		if (write(1, buffer, BUFFER_SIZE) != BUFFER_SIZE)
			return (-1);
		index = 0;
	}

	buffer[index++] = c;

	return (c);
}

void _flush_buffer(void)
{
	if (index > 0)
	{
		if (write(1, buffer, index) != index)
			return;
		index = 0;
	}
}
