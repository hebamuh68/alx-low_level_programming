#include "main.h"
#include <ctype.h>
/**
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
*/
int _islower(int c)
{
    if (islower(c))
    {
        return (0);
    }
    return (1);
}