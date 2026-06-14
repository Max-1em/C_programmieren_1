#include "lib.h"

int is_digit(char c)
{
    return c >= '0' && c <= '9';
}

int is_upper(char c)
{
    return c >= 'A' && c <= 'Z';
}

int is_lower(char c)
{
    return c >= 'a' && c <= 'z';
}

char to_upper_char(char c)
{
    if (is_lower(c))
    {
        return c - 32;
    }

    return c;
}

char to_lower_char(char c)
{
    if (is_upper(c))
    {
        return c + 32;
    }

    return c;
}

// Made with Bob
