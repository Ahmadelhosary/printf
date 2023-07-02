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
	char *null_str = "(null)";

	s = va_arg(args, char*);

	if (s == NULL)
	{
		i = 0;
		while (null_str[i] != '\0')
		{
			_putchar(null_str[i]);
			i++;
		}
	}
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
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
#include "main.h"

void print_i(va_list args)
{
	int i;
	char buffer[12];
	int j;
	int is_negative;

	i = va_arg(args, int);

	j = 0;
	is_negative = 0;

	if (i == 0)
	{
		_putchar('0');
		return;
	}
	else if (i < 0)
	{
		_putchar('-');
		is_negative = 1;
		i = -i;
	}

	do
	{
		buffer[j++] = '0' + (i % 10);
		i /= 10;
	} while (i != 0);

	if (is_negative)
		j++;

	while (j > 0)
		_putchar(buffer[--j]);
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
	char buffer[21];
	int j;
	int is_negative;

	d = va_arg(args, int);

	j = 0;
	is_negative = 0;

	if (d == 0)
	{
		_putchar('0');
		return;
	}
	else if (d < 0)
	{
		if (d == INT_MIN)
		{
			_putchar('-');
			_putchar('2');
			d %= 1000000000;
			d = -d;
		}
		else
		{
			_putchar('-');
			is_negative = 1;
			d = -d;
		}
	}

	do {
		buffer[j++] = '0' + (d % 10);
		d /= 10;
	} while (d != 0);

	if (is_negative)
		j++;

	while (j > 0)
		_putchar(buffer[--j]);
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

