#include "main.h"


/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int j;
	int i;
	va_list args;

	op_t type[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"%", print_percent}
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < sizeof(type) / sizeof(type[0]); j++)
			{
				if (format[i] == *(type[j].op))
				{
					type[j].f(args);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (0);
}
