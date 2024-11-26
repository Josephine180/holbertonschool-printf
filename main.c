#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...);
int main(void)
{
    int count;
    count = _printf("Hello, %s!\n", "world");
    printf("Printed %d characters.\n", count);
    count = _printf("This is a char: %c\n", 'A');
    printf("Printed %d characters.\n", count);
    count = _printf("Printing a percentage symbol: %%\n");
    printf("Printed %d characters.\n", count);
    return 0;
}



