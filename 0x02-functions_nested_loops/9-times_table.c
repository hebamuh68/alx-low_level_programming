#include "main.h"
/**
 * prints the 9 times table, starting with 0.
*/
void times_table(void)
{
    for (int i = 0; i <= 9; i++)
    {
        int j;
        for (j = 0; j < 9; j++)
        {
            printf("%d, ",i*j);
        }
        printf("%d$\n",i*j);
    }
}