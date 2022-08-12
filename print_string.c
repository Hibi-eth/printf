#include "main.h"

/**
 * print_string counts string character for printf
 *@string
 * Return: number of char
 */
int print_string(char *string)
{
	int amount = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		amount += _putchar(string[i]);
	}
	return (amount);
}
