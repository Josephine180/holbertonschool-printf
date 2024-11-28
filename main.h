#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);/* declaration fonction */
/**
* struct print - structure link a format and a function
* @specifier: type of elements
* @f: function link to show the type of argument
*/

typedef struct print /* creation de la structure */
{
char *specifier;/* pointeur qui va pointer sur le tableau */
int (*f)(va_list args);/* declaration d'un pointeur de fonction et argument */
} print_t;/* alias du nom */

int _putchar (char c);/*declaration des fonctions utilisées dans l'autre fichier */
int print_char(va_list args);/* same */
int print_str(va_list args);/* same */
int print_pourcent(va_list args);/* same */
int print_int(va_list args); /* same */
int print_num(unsigned int num); /* same*/


#endif
