#include "main.h"
/**
 * Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
*/

void more_numbers(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
else
{
_putchar(j + '0');
}
}
_putchar('\n');
}
}
