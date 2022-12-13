#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Return: Always 0 (Success)
 */
int main() {
    char charType;
    int intType;
    long int longType;
    long long int longlongType;
    float floatType;

    printf("Size of a char: %zu byte(s)\n", sizeof(charType));
    printf("Size of an int: %zu byte(s)\n", sizeof(intType));
    printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
    printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

    return 0;
}
