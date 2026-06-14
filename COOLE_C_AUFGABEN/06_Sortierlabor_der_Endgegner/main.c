#include <stdio.h>

int main(void)
{
    FILE *file = fopen("test.txt", "r");
    int number = 0;
    int sum = 0;
    int max = 0;
    int first = 1;

    if (file == NULL)
    {
        printf("Datei konnte nicht geoeffnet werden.\n");
        return 1;
    }

    while (fscanf(file, "%d", &number) == 1)
    {
        printf("%d\n", number);
        sum += number;

        if (first || number > max)
        {
            max = number;
            first = 0;
        }
    }

    fclose(file);

    printf("Summe: %d\n", sum);
    printf("Groesste Zahl: %d\n", max);

    return 0;
}

// Made with Bob
