#include "main.h"

/**
 * print_c - Prints a character.
 * @args: Arguments list.
 *
 * Description:
 * This function prints a character by retrieving it from the arguments list
 * and using the _putchar() function to write it to the standard output.
 */
void print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
}

/**
 * print_s - Prints a string.
 * @args: Arguments list.
 *
 * Description:
 * This function prints a string by retrieving it from the arguments list
 * and using the _putchar() function to write each character
 */
void print_s(va_list args)
{
	char *s;
	int i;

	s = va_arg(args, char*);
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * print_i - Prints an integer.
 * @args: Arguments list.
 *
 * Description:
 * This function prints an integer by converting it to a string using
 * the sprintf() function,
 * and then using the _putchar() function to write each character of the string
 */
void print_i(va_list args)
{
	int i;
	char buffer[20]; /* Buffer to hold the converted integer as string */
	int j;

	i = va_arg(args, int);
	sprintf(buffer, "%d", i); /* Convert integer to string */
	j = 0;
	while (buffer[j] != '\0')
	{
		_putchar(buffer[j]);
		j++;
	}
}

/**
 * print_d - Prints a decimal.
 * @args: Arguments list.
 *
 * Description:
 * This function prints a decimal by converting it to a string
 * using the sprintf() function,
 * and then using the _putchar() function to write each character of the string
 */
void print_d(va_list args)
{
	int d;
	char buffer[20]; /* Buffer to hold the converted decimal as string */
	int j;

	d = va_arg(args, int);
	sprintf(buffer, "%d", d); /* Convert decimal to string */
	j = 0;
	while (buffer[j] != '\0')
	{
		_putchar(buffer[j]);
		j++;
	}
}

/**
 * print_percent - Prints a percentage character.
 * @args: Arguments list.
 *
 * Description:
 * This function prints a percentage character using the _putchar() function.
 */
void print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
}

