#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * print_char - Function
 * @list: input
 * Return: Always 1.
 */
int print_char (va_list list)
{
	if (s == NULL)
	{
		s = NULL;
	}

	char x = va_argc(list, int);

	putchar(x);
	return (1);
}

/**
 * print_string - Function
 * @string_list: input
 * Return: 0
 */
int print_string(va_list string_list)
{
	char *s = va_arg(list, char *);
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_int - Function
 * @int_list: input
 * Return: 0
 */
int print_int(va_list int_list)
{

}

/**
 * print_float - Function
 * @float_list: input
 * Return: 0
 */
int print_float(va_list float_list)
{

}
