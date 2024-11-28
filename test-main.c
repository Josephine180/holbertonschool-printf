#include "main.h"

#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main() {
 
    long bigNum = 2147483648L; 
    unsigned long veryBigNum;
veryBigNum= 1000000000000UL; 

    printf("Grand nombre : %ld\n", bigNum);
printf("Nombre trè grand : %lu\n", veryBigNum);
    return 0;
}
