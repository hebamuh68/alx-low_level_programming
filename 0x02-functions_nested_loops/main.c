#include <stdio.h>

void jack_bauer(void)
{

    for(int h = 0; h <= 23; h++)
    {
        for(int m = 0; m <= 59; m++)
        {
            if (h < 10)
            {
                printf("0%d", h);
            }
            if (h >= 10)
            {
                printf("%d", h);
            }

            if (m < 10)
            {
                printf(":0%d\n", m);
            }
            if (m >= 10)
            {
                printf(":%d\n", m);
            }
            
        }
    }

}

int main(void)
{
    jack_bauer();
    return(0);
}