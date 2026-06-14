#include <stdio.h>

int main(void)
{
    char c = 0;

    printf("Bitte ein Zeichen eingeben: ");
    scanf("%c", &c);

    if (c >= '0' && c <= '9')
    {
        printf("Das Zeichen ist eine Ziffer.\n");
    }
    else
    {
        printf("Das Zeichen ist keine Ziffer.\n");
    }

    if (c >= 'A' && c <= 'Z')
    {
        printf("Das Zeichen ist ein Grossbuchstabe.\n");
        printf("Als Kleinbuchstabe: %c\n", c + 32);
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("Das Zeichen ist ein Kleinbuchstabe.\n");
        printf("Als Grossbuchstabe: %c\n", c - 32);
    }
    else
    {
        printf("Das Zeichen ist kein Buchstabe.\n");
    }

    printf("ASCII-Wert: %d\n", c);

    return 0;
}

// Made with Bob
