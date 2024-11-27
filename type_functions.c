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
int num = va_arg(args, int);
int count = 0;
char buffer[50];
int i = 0, temp, sign = 0, j;
if (num < 0)
{
sign = 1;
num = -num;
}
if (num == 0)
{
buffer[i++] = '0';
}
else
{
temp = num;
while (temp > 0)
{
buffer[i++] = (temp % 10) + '0';
temp /= 10;
}
}
if (sign)
{
buffer[i++] = '-';
}
for (j = i - 1; j >= 0; j--)
{
_putchar(buffer[j]);
count ++;
}
return (count);
}

