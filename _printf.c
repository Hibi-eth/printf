

#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int amount = 0, i;


	va_list data;


	va_start(data, format);


	for (i = 0; format[i] != '%' && format[i] != '\0'; i++)
	{
		amount = amount + _putchar(format[i]);
	}



	return (amount);
}
