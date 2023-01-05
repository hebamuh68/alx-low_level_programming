#include <stdio.h>

int main(void) {
    int n = 5;
    int array[5];
    int i = 3;

    array[n] = i;
    int length = sizeof(array) / sizeof(array[0]);

    printf("Elements of given array: \n");
    //Loop through the array by incrementing value of i     
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    return (0);
}