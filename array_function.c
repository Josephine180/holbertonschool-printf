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
