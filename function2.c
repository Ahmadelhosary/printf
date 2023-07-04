#include "main.h"

#define BUFFER_SIZE 1024

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	char buffer[BUFFER_SIZE];
	int index;

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


/**
 * printBinary - Print an unsigned integer in binary format
 * @num: Unsigned integer to print
 */
void printBinary(unsigned int num)
{
	int i;
	int binary[32];
	int j;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	i = 0;

	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
	}
}

/**
 * print_b - Print an unsigned integer in binary format
 * @args: Arguments list containing the unsigned integer to print
 */
void print_b(va_list args)
{
    unsigned int num;

    num = va_arg(args, unsigned int);

    if (num == 0)
    {
        _putchar('0');
        return;
    }

    printBinary(num);
}
