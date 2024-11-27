#include "main.h"

/**
* print_char - print a character
* @args: va_list containing the argument to be printed (char).
* Description: this function extracts a character from the va_list end.
* Return: number of character
*/

int print_char(va_list args)
{
char c;
c = va_arg(args, int);
_putchar(c);
return (1);
}

/**
* print_str - print a string
* @args: va_list containing the argument to be printed (str).
* Description: this function extracts a character from va_list end.
* Return: number of character of a string.
*/

int print_str(va_list args)
{
char *s;
int count = 0;
s = va_arg(args, char *);
if (s == NULL)
{
s = "(null)";
}
while (*s)
{
_putchar(*s);
s++;
count++;
}
return (count);
}

/**
* print_pourcent - print a pourcent
* @args: va_list containing the argument to be printed (%)
* Description: this function extracts a character from va_list end.
* Return: number of %
*/

int print_pourcent(va_list args)
{
(void)args;
_putchar('%');
return (1);
}

/**
* print_int - print a int
* @args: va_list containing argument to be printed (int)
* Description: this function extracts a character from va_list end.
* Return: number of int
*/
int print_int(va_list args)
{
int i;
int count = 0;
int n = va_arg(args, int);
if (n < 0)
{
count += _putchar('-');
}
for (i = 1000000000; i > 0; i /= 10)
{
if (n / i)
{
if ((n / i) % 10 < 0)
count += _putchar(-(n / i % 10) + '0');
else
count += _putchar((n / i % 10) + '0');
}
else if (n / i == 0 && i == 1)
{
count += _putchar(n / i % 10 + '0');
}
}
return (count);
}
