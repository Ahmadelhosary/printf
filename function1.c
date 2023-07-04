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
