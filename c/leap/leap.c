#include "leap.h"

bool leap_year(int year)
{
    if (year % 4 == 0 && year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            return (1);
        }
        else
            return (0);
    }
    else if (year % 4 == 0)
    {
        return (1);
    }
    else
        return (0);
}