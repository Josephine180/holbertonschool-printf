#include "main.h"
/**
* _printf - print the elts by the format
* @format: string of characters
* Description: printf print a character
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0, j, specifier_found = 0;
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
if (format[i] == '\0')
{
break;
}
for (j = 0; printf_t[j].specifier != NULL; j++)
{
if (format[i] == *printf_t[j].specifier)
{
count += printf_t[j].f(args);
specifier_found = 1;
break;
}
}
if (!specifier_found)
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
