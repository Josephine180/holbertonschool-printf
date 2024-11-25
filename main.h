#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct print
{
char *specifier;
int (*f)(va_list args);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
