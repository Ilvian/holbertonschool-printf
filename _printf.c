#include <stdarg.h>
#include "main.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list list;
	int i, j;

	print_func p_func[] = {
		{"c",print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
                return (0);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (p_func->id != NULL)
			{
				if (format[i + 1] == p_func->id[0])
				{
					char_count += p_func[j].print(list);
					i++;
				}
				j++;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar ('%');
			i++;
			char_count += 1;
		}
		else
		{
			putchar (format[i]);
			char_count += 1;
		}
		i++;
	}
	va_end(list);
	return (char_count);
}
