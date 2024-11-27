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
{"c", print_char},
{"s", print_str},
{"%", print_pourcent},
{"d", print_int},
{"i", print_int},
{NULL, NULL}
};
va_list args;
if (format == NULL)
return(-1);
int i = 0, count = 0, j, found = 0;
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%' && format [i+1])
{
i++;
j = 0;
for (j = 0; print_t[j].specifier != NULL; j++)
{
if (format[i] == *print_t[j].specifier)
{
count += print_t[j].f(args);
found = 1;
break;
}
}
if (!found)
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
