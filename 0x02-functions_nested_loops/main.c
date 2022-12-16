#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _islower(int c)
{
    if (islower(c))
    {
        return (0);
    }
    return (1);
}

int main(void)
{
    int c = 'A';
    printf("%d", _islower(c));

    return (0);
}

