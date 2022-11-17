#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * File: Variadic _functions.h
 * Auth: Adeola Haastrup
 * Desc: Header File containing prototypes for all functions used in the 0x10. C - Variadic functions directory
 */
#include <stdarg.h>

/*
 * Struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A Function pointer to a function that prints a data type corresponding to a symbol
 */
typedef struct printer
{
	char *symbol;
	void(*print) ( va_list arg);
} printer_t;
int sum_them_all(const unsigned int n, ...)
void print_numbers(const char *separator, const unsigned int n, ...)
void print_strings(const char *separator, const unsigned int n, ...)
void print_all(const char * const format, ...);

#endif
