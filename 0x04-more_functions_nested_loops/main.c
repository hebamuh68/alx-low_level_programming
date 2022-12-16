#include <stdio.h>
#include "main.h"
/**
 * Main run
*/
int main(void)
{
    char c;
    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}