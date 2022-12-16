#include "main.h"
#include <ctype.h>
/**
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}