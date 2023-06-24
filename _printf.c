#include <main.h>

/**
 * _printf - Custom printf function
 *
 * This function takes a format string and variable arguments, and prints
 * the formatted output to the standard output.
 *
 * @format: The format string specifying the format of the output.
 * @...: Additional variable arguments based on the format string.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

int len = 0;

	for (int i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%') {
	i++;
		if (format[i] == 'c') 
		{
		char value = (char)va_arg(args, int);
		_putchar(value);
		len++;

		}

		else if (format[i] == 's')
		{
		char *value = va_arg(args, char *);
		while (*value != '\0')
       		{
		_putchar(*value);
		len++;
		value++;
		}

} 
else if (format[i] == '%') {
_putchar('%');
len++;
} else {
_putchar('%');
_putchar(format[i]);
len += 2;
}
} else {
_putchar(format[i]);
len++;
}
}

va_end(args);

return len;
}
