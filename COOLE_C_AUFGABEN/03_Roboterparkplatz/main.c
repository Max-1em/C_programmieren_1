#include <stdio.h>

int main(void)
{
    int number = 0;
    int temp = 0;
    int digit_count = 0;
    int cross_sum = 0;

    printf("Bitte eine positive Zahl eingeben: ");
    scanf("%d", &number);

    temp = number;

    if (temp == 0)
    {
        digit_count = 1;
    }

    while (temp > 0)
    {
        cross_sum += temp % 10;
        digit_count++;
        temp /= 10;
    }

    printf("Anzahl der Ziffern: %d\n", digit_count);
    printf("Quersumme: %d\n", cross_sum);

    return 0;
}

// Made with Bob
