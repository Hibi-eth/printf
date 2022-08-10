#include "main.h"

/**
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * Return: number of char printed
 */
int print_string(va_list l)
{
	char *s = va_arg(l, char *);
	int i;

	if (s == NULL)
		s = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
	
}

/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * Return: number of char printed
 */
int print_char(va_list l)
{
	_write_char(va_arg(l, int));
	return (1);
}
