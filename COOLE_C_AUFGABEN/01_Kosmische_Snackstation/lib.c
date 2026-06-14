#include "lib.h"

float calculate_total(int burger, int fries, int drinks)
{
    return burger * 5.0f + fries * 3.0f + drinks * 2.0f;
}

int count_items(int burger, int fries, int drinks)
{
    return burger + fries + drinks;
}

// Made with Bob
