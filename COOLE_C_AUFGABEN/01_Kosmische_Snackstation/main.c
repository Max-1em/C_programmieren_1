#include <stdio.h>
#include "lib.h"

int main(void)
{
    int burger = 0;
    int fries = 0;
    int drinks = 0;
    float total = 0.0f;
    int items = 0;

    printf("Burger: ");
    scanf("%d", &burger);

    printf("Pommes: ");
    scanf("%d", &fries);

    printf("Getraenke: ");
    scanf("%d", &drinks);

    total = calculate_total(burger, fries, drinks);
    items = count_items(burger, fries, drinks);

    printf("Gesamtsumme: %.2f\n", total);
    printf("Artikel gesamt: %d\n", items);

    if (items > 5)
    {
        printf("Mehr als 5 Artikel wurden gekauft.\n");
    }
    else
    {
        printf("Es wurden hoechstens 5 Artikel gekauft.\n");
    }

    return 0;
}

// Made with Bob
