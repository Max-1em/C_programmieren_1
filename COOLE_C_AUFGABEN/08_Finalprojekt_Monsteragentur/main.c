#include <stdio.h>

int main(void)
{
    int values[5] = {5, 2, 8, 1, 4};
    int i = 0;
    int j = 0;
    int temp = 0;

    printf("Vorher: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (values[j] > values[j + 1])
            {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    printf("Nachher: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}

// Made with Bob
