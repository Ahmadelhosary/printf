#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * struct op - Represents an operation and its associated function.
 * @op: A pointer to a constant character string representing the operation.
 * @f: A function pointer to the function associated with the operation.
 *
 * Description: This struct encapsulates an operation
 * and its corresponding function.
 */

typedef struct op
{
	const char *op;
	void (*f)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
void print_c(va_list args);
void print_s(va_list args);
void print_i(va_list args);
void print_d(va_list args);
void print_percent(va_list args);





#endif /*_PRINTF_H*/
