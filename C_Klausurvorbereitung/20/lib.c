#include "lib.h"
#include <stdlib.h>
#include <stdio.h> 
#include <stdbool.h>

void test(){
    int *arr = malloc(10* sizeof(int));

    if (arr == NULL){
        return;
    }

    printf("MOIN\n");

    free(arr);
}


void bubbleSort(int* arr, int n){
    bool changed = TRUE; 
    while (changed==TRUE){
        changed=FALSE;
        for (int i=0; i<n-1; i++){
            if (arr[i]>arr[i+1]){
                swapp(arr[i], arr[i+1])
                changed=TRUE;
            }
        }
    }
}

void swapp(int* a, int*b){
    int k= *a;
    *a=*b;
    *b=k; 
}