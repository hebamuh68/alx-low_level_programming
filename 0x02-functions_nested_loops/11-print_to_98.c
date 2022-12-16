#include "main.h"
/**
 * Write a function that prints all natural numbers from n to 98, followed by a new line.
*/
void print_to_98(int n)
{
    for (n; n <= 98; n++)
    {
        printf("%d, ", n);
    }
    printf("\n");
}