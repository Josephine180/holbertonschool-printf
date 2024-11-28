#include "main.h"

/**
* print_char - print a character
* @args: va_list containing the argument to be printed (char).
* Description: this function extracts a character from the va_list end.
* Return: number of character
*/

int print_char(va_list args)/* fonction qui print char */
{
char c;
c = va_arg(args, int); /* eextraction arg de type char depuis va_list */
_putchar(c);/*impression du caractere via _putchar */
return (1);/* retourne le nombre de caractere imprimé */
}

/**
* print_str - print a string
* @args: va_list containing the argument to be printed (str).
* Description: this function extracts a character from va_list end.
* Return: number of character of a string.
*/

int print_str(va_list args)/* fonction print int */
{
char *s;/* pointeur d'une chaine de caracteres*/
int count = 0;/*initialisation count */
s = va_arg(args, char *);/* extraction arg de type string depuis va_list */
if (s == NULL)
{
s = "(null)"; /* si chaine null on affiche null */
}
while (*s)/* on parcourt la chaine caractère par caractère */
{
_putchar(*s); /* impression de chaque caractere */
s++;/* déplacement vers le caractere suivant */
count++; /* incrementation du compteur de caracteres */
}
return (count);/*retourne le nombre de caracteres */
}

/**
* print_pourcent - print a pourcent
* @args: va_list containing the argument to be printed (%)
* Description: this function extracts a character from va_list end.
* Return: number of %
*/

int print_pourcent(va_list args)
{
(void)args;/* argument args pas utilisé */
_putchar('%');
return (1);
}

/**
 * print_int - print number
 * @args: variadic argument
 * Return: number of integrer
*/

int print_int(va_list args) /* print a int */
{
int num = va_arg(args, int); /* extraire l'argument de va_list */
int count = 0;/* compte le  nombre de caracteres à imprimer */
if (num < 0)/* si nombre négatif */
{
count += _putchar('-'); /* afficher le signe négatif */
num = -num;/* rend le nombre positif pour le traitement ultérieur */
}
count += print_num(num);/* affiche le nombre et retourne le nombre de caractères imprimés */ 
/* affiche le nombre */
return (count);/* retourne le total des caractères imprimés */
}

/**
* print_num - recursive function
* @num: parametre
* Return: number of charactere
*/
int print_num(unsigned int num)
{
int count = 0;
if (num / 10 > 0)/* si num est supérieur ou égal à 10, on continue la récursion pour traiter les chiffres */
count += print_num(num / 10);/* appelrécursif avec le nombre réduit */
count += _putchar((num % 10) + '0');/* affichage du dernier chiffre (num %10) après avoir traité les chiffres avant */
/* conversion du dernier chiffre en caractère ASCII et affichage */
return (count);/*retourn le nombre de caractères imprimés */
}
