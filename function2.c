#include "main.h"

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_d - Prints a decimal number.
 * @args: Arguments list.
 *
 * Description:
 * This function prints a decimal number by retrieving it from the arguments list
 * and using putchar to print each digit recursively.
 * If the number is negative, it prints a '-' character before the absolute value.
 *
 * Return: void
 */
void print_d(va_list args)
{
	int num;
	num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num >= 10)
		print_d(args);

	_putchar('0' + num % 10);
}

/**
 * print_i - Prints an integer.
 * @args: Arguments list.
 *
 * Description:
 * This function prints an integer by retrieving it from the arguments list
 * and using putchar to print each digit recursively.
 * If the number is negative, it prints a '-' character before the absolute value.
 *
 * Return: void
 */
void print_i(va_list args)
{
	int num;
	num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num >= 10)
		print_i(args);

	_putchar('0' + num % 10);
}
