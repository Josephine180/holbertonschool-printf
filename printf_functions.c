#include "main.h"
/**
* _printf - print the elts by the format
* @format: string of characters
* Description: printf print a character
* Return: number of characters printed
*/
int _printf(const char *format, ...)/* printf prend une chaine de format et nombre variable d'arg. utiisation va_list */
{
print_t  print_t[] = {/* tableau de structures def chaque elt avec une fonction et des specificateurs */
{"c", print_char}, {"s", print_str}, {"%", print_pourcent},
{"i", print_int}, {"d", print_int}, {NULL, NULL}
};/* chaque elt associe tableau et specificateur de format à une fonction qui affiche l'elt */
va_list args;/* initialisation de args utilisé pour acceder aux args*/
int i = 0, count = 0, j;/*initialisation des valeurs*/
va_start(args, format); /* début */
while (format[i])/* boucle externe */
{
if (format[i] == '%')/*condition de i */
{
i++;
if (!format[i]) /* si le format se termine par % on sort de la boucle */
break;
for (j = 0; print_t[j].specifier; j++) /* recherche du spécificateur dans le tableau */
{
if (format[i] == *print_t[j].specifier)/* si specificateur de format = fonction correspondant*/
{
count += print_t[j].f(args);/* appel de la fonction associée au specificateur, += nrb caractere ajouté à count*/
break;
}
}
if (!print_t[j].specifier)/* si specificateur est ps trouvé le % est imprimé suivi du caractere suivant */
{
_putchar('%');
_putchar(format[i]);
count += 2; /* 2 car 1 pour le % et 1 pour le caractere suivant */
}
}
else
{
_putchar(format[i]);/* si le caractere pas un % il est imprimé tel quel */
count++; /*stockage des caracteres dans count */
}
i++;/* continue le tableau */
}
va_end(args); /* libérer les args */
return (count);/* retourne le nombre de caracteres */
}
