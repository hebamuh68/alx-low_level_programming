#include "main.h"
/**
 * Write a function that checks for uppercase character.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
_putchar(1);
}
else if (c >= 'a' && c <= 'z')
{
_putchar(0);
}
}
