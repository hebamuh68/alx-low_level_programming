#include <stdio.h>

int print_last_digit(int num)
{
    return (num%10);
}

int main(void)
{
    printf("%d",print_last_digit(-987));
    return(0);
}