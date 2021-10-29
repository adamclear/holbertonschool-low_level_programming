#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct opts - struct for argument options and formats
 * @n: variable to check against to determine which opt and fmt to use
 * @opt: option to use with associated variable
 * @fmt: format to use with associated variable
 */
typedef struct opts
{
	char *n;
	char *opt;
	char *fmt;
} opts_t;

#endif
