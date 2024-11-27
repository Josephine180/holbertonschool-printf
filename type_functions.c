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
* print_pourcent - print a integrer
* @args: va_list containing the argument to be printed (%)
* Description: this function extracts a character from va_list end.
* Return: number of digit
*/

int print_int(va_list args)
{
int num = va_arg(args, int);
int divisor = 1000000000;
int count = 0;
if (num == 0)
{
_putchar('0');
return (1);
}
if (num < 0)
{
_putchar('-');
num = -num;
count++;
}
while (divisor > 0 && num / divisor == 0)
{
divisor /= 10;
}
while (divisor > 0)
{
_putchar((num / divisor) + '0');
num %= divisor;
divisor /= 10;
count++;
}
return (count);
}
