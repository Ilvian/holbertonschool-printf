#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - functions that prints char character from va_list
 * @list: list of arguments
 * Return: Return always 1
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	putchar(c);
	return (1);
}

/**
 * print_string - prints string from va_list
 *@list: list of arguments
 *Return: length of the string
 */
int print_string(va_list list)
{
	int i = 0;
	char *str = va_arg(list, char*);

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_int - prints integer from va_list as a string
 *@list: list of arguments
 *Return: length of numbers
 */
int print_int(va_list list)
{
	int n = va_arg(list, int);
	int digit = 0;
	int x = n;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		putchar('0');
		return (1);
	}

	while (x > 0)
	{
		x /= 10;
		digit++;
	}
	while (n > 0)
	{
		digit = n % 10;
		putchar('0' + digit);
		n /= 10;
	}
	return (digit);
}
