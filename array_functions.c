#include "main.h"

print_t  printf_t[] = {
{"c", print_char},
{"s", print_str},
{"%", print_pourcent},
{"i", print_int},
{"d", print_int},
{NULL, NULL}
};
