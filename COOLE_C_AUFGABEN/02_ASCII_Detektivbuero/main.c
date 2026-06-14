#include <stdio.h>
#include "lib.h"

int main(void)
{
    char c = 0;

    printf("Bitte ein Zeichen eingeben: ");
    scanf("%c", &c);

    printf("Ist Ziffer: %d\n", is_digit(c));
    printf("Ist Grossbuchstabe: %d\n", is_upper(c));
    printf("Ist Kleinbuchstabe: %d\n", is_lower(c));
    printf("ASCII-Wert: %d\n", c);
    printf("Als Grossbuchstabe: %c\n", to_upper_char(c));
    printf("Als Kleinbuchstabe: %c\n", to_lower_char(c));

    return 0;
}

// Made with Bob
