#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
/**
* struct print - structure link a format and a function
* @specifier: type of elements
* @f: function link to show the type of argument
*/

typedef struct print
{
char *specifier;
int (*f)(va_list args);
} print_t;

int _putchar (char c);
int print_char(va_list args);
int print_str(va_list args);
int print_pourcent(va_list args);
int print_int(va_list args);



#endif
