#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 */
int print_char (va_list list)
{
	char x = va_argc(list, int);
	putchar(x);
	return (1);
}

/**
 */
int print_string(va_list string_list)
{
	
}

/**
 */
int print_int(va_list int_list)
{

}

/**
 */
int print_float(va_list float_list)
{

}