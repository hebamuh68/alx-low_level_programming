#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _isalpha(int c)
{
    if (isalpha(c))
    {
        return(1);
    }
    return(0);
}

int main(void)
{
    int c = 3;
    printf("%d", _isalpha(c));

    return (0);
}

