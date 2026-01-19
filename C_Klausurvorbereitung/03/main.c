#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int* implement_array(size_t size, int32_t value)
{
    int* array[size];
    *array = malloc(size* sizeof(int));

    for (size_t i=0;i<size; i++)
    {
        array[i]=value;
    }

    return array;
}

void freeHeap(int* parameter)
{
    free(parameter);
    parameter = NULL;
}