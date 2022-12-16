#include <stdio.h>
#include "main.h"
/**
 * Main run
*/
int main(void)
{
char c;

    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}