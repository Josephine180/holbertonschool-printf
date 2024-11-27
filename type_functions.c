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
 * print_int_rec - print recursion
 * @num: number print
 * @count: number charactere to print
 * Return: number of charactere
*/

int print_int_rec(int num, int count)
{
int result = 0;
if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
if (num >= 10)
{
result = print_int_rec(num / 10, count);
}
else
{
result = count;
}
_putchar(num % 10 + '0');
result++;
return (result);
}

/**
* print_int - print a int
* @args: va_list containing argument to be printed (int)
* Description: this function extracts a character from va_list end.
* Return: number of int
*/
int print_int(va_list args)
{
int num = va_arg(args, int);
return (print_int_rec(num, 0));
}
