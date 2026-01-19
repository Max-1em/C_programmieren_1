#include <stdio.h>
#include <stddef.h>

void swap(int *a, int *b) {
    int temp= *a;
    *a = *b; 
    *b= temp;
}

int* findMax(int *array, size_t length) {
    int *max = NULL;
    for (size_t i=0; i<length; i++)
    {
        if (max == NULL || array[i]> *max)
        {
            max = &array[i];
        }
    }
    return max;
}

void increment(int *value, int amount) {
    *value += amount; 
}

int main(void) {
    int x = 5, y = 10;
    printf("Vor swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("Nach swap: x=%d, y=%d\n", x, y);
    
    int arr[] = {3, 7, 2, 9, 1};
    int *max = findMax(arr, 5);
    if (max != NULL) {
        printf("Maximum: %d\n", *max);
    }
    
    int val = 10;
    printf("Vor increment: %d\n", val);
    increment(&val, 5);
    printf("Nach increment: %d\n", val);
    
    return 0;
}