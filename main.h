#ifndef MAIN_H
#define MAIN_H
/**
 *struct print_func - function that produces output according to a format
 *@format: input
 *@print: input
 */
typedef struct print_func
{
	char *format;
	int (*print)(va_list list);
} print_func;
int print_char (va_list char_list);
int print_string(va_list string_list);
int print_int (va_list int_list);
int print_float (va_list float_list);
int _printf(const char *format, ...);
#endif
