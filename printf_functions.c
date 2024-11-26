#include "main.h"
/**
* _printf - print the elts by the format
* @format: string of characters
* Description: printf print a character
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
print_t  print_t[] = {
{"c", print_char}, {"s", print_str}, {"%", print_pourcent},
{"i", print_int}, {"d", print_int}, {NULL, NULL}
};
va_list args;
int i = 0, count = 0, j;
va_start(args, format);
while (format[i])
{
if (format[i] == '%')
{
i++;
if (!format[i])
break;
for (j = 0; print_t[j].specifier; j++)
{
if (format[i] == *print_t[j].specifier)
{
count += print_t[j].f(args);
break;
}
}
if (!print_t[j].specifier)
{
_putchar('%');
_putchar(format[i]);
count += 2;
}
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(args);
return (count);
}
