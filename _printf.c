#include <stdarg.h>
#include "main.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars = 0;
    char ch, c, *s;

	va_list args;
    va_start(args, format);
    while ((ch = *format++) != '\0') {
        if (ch != '%') {
            putchar(ch);
            printed_chars++;
        } else {
            ch = *format++;
            switch (ch) {
                case '%':
                    putchar('%');
                    printed_chars++;
                    break;
                case 'c': ;
                    c = va_arg(args, int);
                    putchar(c);
                    printed_chars++;
                    break;
                case 's': ;
                    s = va_arg(args, char*);
                    while (*s) {
                        putchar(*s++);
                        printed_chars++;
                    }
                    break;
                default:
                    va_end(args);
                    return -1;
            }
        }
    }

    va_end(args);
    return printed_chars;
}
