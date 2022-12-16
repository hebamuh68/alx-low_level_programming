#include "main.h"
/**
 * prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: On success 1.
*/
void print_alphabet_x10(void)
{
    for(int i = 0; i<=10; i++)
    {
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
    }
}