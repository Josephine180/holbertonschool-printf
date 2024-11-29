# holbertonschool-printf

The objective of this project is to code the printf function. The printf function should return the number of characters to be printed.
The function must handle conversion specifiers to display strings and characters.
The files are:

- printf_functions: the file where the printf function is implemented.
- type_functions: functions that print characters.
- other_functions: the putchar function.
- main.h: contains the libraries and the header, the structure, and the function prototypes.
- man_3_printf: the manual page.

#Table of Contents

- Description
- Title
- Requirements
- Tasks
- Compilation
- License

#Description

The function takes a format string and a variable number of arguments. It handles format specifiers and prints the corresponding values.
It returns the number of characters printed (excluding the null byte at the end of the string).

Supported Specifiers:
%c: Prints a single character.
%s: Prints a string of characters.
%%: Prints a literal percentage sign (%).
%d and %i: Print an integer. Negative integers are handled by printing a minus sign first, followed by the absolute number.

#Title 

Write your own printf function.

#Requirements : 

Allowed editors: vi, vim, emacs
All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
The code should use the Betty style. 
The prototypes of all functions should be included in your header file called main.h
All your header files should be include guarded


#Tasks: 

1. Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

2.
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

#compilation 

Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$

Flowchart :
![image](https://github.com/user-attachments/assets/5dd283bf-736a-4411-9675-bb57e6885505)
![image](https://github.com/user-attachments/assets/007bb92c-41fc-403f-bc3d-8d74eabae0ee)
![image](https://github.com/user-attachments/assets/e3768d21-c728-4dbe-83ad-bf8e8272fd16)

#Work in group 
ROBLES Corentin: https://github.com/Coco29dev
PIERRE Joséphine:https://github.com/Josephine180
=======
>>>>>>> 9598ce2904de95a022dce4091638e961969c9c8f
