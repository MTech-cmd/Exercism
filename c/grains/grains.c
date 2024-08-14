#include "grains.h"

uint64_t square(uint8_t index)
{
    if (index == 1)
    {
        return (1);
    }

    if (index == 0)
    {
        return (0);
    }

    uint64_t current_square = 1;
    uint64_t total = 1;

    while (current_square < index)
    {
        total *= 2;
        current_square++;
    }

    return (total);
}

uint64_t total(void)
{
    int n = 64;
    int total = 0;

    for (int i = 1; i < n; i++)
    {
        total += square(i);
    }

    return (total);
}

// #include "stdio.h"

// int main()
// {
//     printf("%i", total());
// }