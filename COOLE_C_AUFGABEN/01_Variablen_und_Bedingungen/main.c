#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    float average = 0.0f;
    int max = 0;

    printf("Bitte drei ganze Zahlen eingeben: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0f;

    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    printf("Summe: %d\n", sum);
    printf("Durchschnitt: %.2f\n", average);
    printf("Groesste Zahl: %d\n", max);

    if (sum > 100)
    {
        printf("Die Summe ist groesser als 100.\n");
    }
    else
    {
        printf("Die Summe ist nicht groesser als 100.\n");
    }

    return 0;
}

// Made with Bob
