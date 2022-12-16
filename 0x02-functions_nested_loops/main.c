#include <stdio.h>

void print_to_98(int n)
{
    for (n; n <= 98; n++)
    {
        printf("%d, ", n);
    }
    printf("\n");

}

int main(void)
{
    print_to_98(-10);
    return (0);
}