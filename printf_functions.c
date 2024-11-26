#include "main.h"

/*
* -printf - print the elts by the format
* @format: string of characters
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
print_t  print_t [] = {
{"c", print_char},
{"s", print_str},
{"%", print_pourcent},
{'\0', NULL}
};
va_list args;
int count = 0;
int i = 0;
int j;
int found = 0;
va_start(args, format);
/*if (format[i] == 0)
{
return(-1);
}
while (format && format[i])
{
while (print_t[count].specifier)
{
if (*print_t[count].specifier == format[i])
{
print_t[count].f(args);
}
count++;
}
count = 0;
i++;
}
_putchar('\n');
va_end(args);
return(count);
}
*/
while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;  /* Passer au caractère suivant après '%' */
           
            /* Rechercher le spécificateur correspondant dans la table */
            for (j = 0; print_t[j].specifier != '\0'; j++) {
                if (format[i] == print_t[j].specifier) {
                    count += print_t[j].f(args);
                    found = 1;
                    break;
                }
            }

            /* Si aucun spécificateur trouvé, imprimer '%' comme caractère normal */
            if (!found) {
                _putchar('%');
                count++;
            }
        } else {
            _putchar(format[i]);  /* Imprimer un caractère normal */
            count++;
        }
        i++;
    }

    va_end(args);  /* Terminer l'utilisation de va_list */
    return count;  /* Retourner le nombre de caractères imprimés */
}
