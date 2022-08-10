#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct convert - defines a structure for symbols and functions
 * on the format specifier passed to printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
struct convert
{
	char *c;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int print_int(va_list);
int print_number(va_list);
int print_unsigned(va_list);
int count_digit(int i);

int print_hex(va_list);
int print_hex_big(va_list);
int print_binary(va_list);
int print_octal(va_list);


int _printf(const char *format, ...);


int print_string(va_list);
int print_char(va_list);

int _putchar(char c);
int _puts(char *str);

int print_rot13(va_list);
int print_rev(va_list arg);


int print_percent(va_list);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _write_char(char c);

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

#endif
