

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


	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			amount = amount + _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != '')
		{
			switch (format[i + 1])
			{
				case 'c';
			amount = amount + _putchar(va_arg(data, int));
			break;
			case 's';
			amount = amount + print_string(va_arg(data, char *));
			break;
			default;
			break;
			}
			i += 2;
		}




	return (amount);
}
