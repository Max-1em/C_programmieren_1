#include <stdio.h>
#include "lib.h"

int main(void)
{
    int x = 8;
    int y = 5;

    printf("Summe: %d\n", add(x, y));
    printf("Groessere Zahl: %d\n", maximum(x, y));

    return 0;
}

// Made with Bob
