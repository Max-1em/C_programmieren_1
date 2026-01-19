
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int* createArray(size_t size, int initial_value) {
    int array[size] ;
    
    for (size_t i = 0; i < size; i++)
    {
        array[i] = initial_value;
    }
}

void resizeArray(int **array, size_t old_size, size_t new_size) {
    int *new_array;
}

void freeArray(int **array) {
    // TODO: Implementiere hier
}

int main(void) {
    int *arr = createArray(5, 42);
    if (arr != NULL) {
        for (size_t i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        
        resizeArray(&arr, 5, 10);
        freeArray(&arr);
        printf("Array freed\n");
    }
    
    return 0;
}