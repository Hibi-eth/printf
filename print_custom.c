#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @l: argument from _printf
 * Return: length of the printed string
 */
int print_rev(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_write_char(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * print_rot13 - prints a string using rot13
 * @l: list of arguments from _printf
 * Return: length of the printed string
 */
int print_rot13(va_list l)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(l, char *);
	if (str == NULL)
		return (-1);
	for (j = 0; str[j] != '\0 ; j++)
	{
		{
			for (i = 0; i <= 52; i++)
			{
				if (str[j] == rot13[i])
					_write_char(ROT13[i]);
				break;
			}
		}
		if (i == 53)
			_write_char(str[j]);
	}
	return (j);
}
