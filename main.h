#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct print
{
char *specifier;
int (*f)(va_list args);
}print_t;

int _putchar (char c);
int print_char(va_list args);
int print_str(va_list args);
int print_pourcent(va_list args);




#endif
