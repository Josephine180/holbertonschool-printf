#include "main.h"

/*
* -printf - print the elts by the format
* @format: string of characters
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
print_t  specifier [] = {
{"c", print_char},
{"s", print_str},
{"%", print_pourcent},
{NULL, NULL}
};
va_list args;
int count = 0;
int i = 0;
va_start(args, format);
if (format[i] == 0)
{
return(-1);
}
while (format && format[i])
{
while (print_t[count].specifier)
{
if (*print_t[count].specifier == format[i])
{
print_t[count].f(args);
}
count++
}
count = 0;
i++
}
_putchar("\n");
va_end(args);
return(count);
}
