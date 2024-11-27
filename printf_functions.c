#include "main.h"
va_list args;
int i = 0, count = 0, j, found = 0;
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
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
