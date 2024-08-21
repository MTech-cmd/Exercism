#include "space_age.h"

float age(planet_t planet, int64_t seconds)
{
    // Error handling
    if (planet < MERCURY || planet > NEPTUNE)
    {
        return -1;
    }

    float earth_years = seconds / 31557600; // calculate to earth years
    float factor;

    // convert to other planet
    switch (planet)
    {
    case 0:
        factor = 0.2408467;
        break;
    case 1:
        factor = 0.61519726;
        break;
    case 2:
        factor = 1;
        break;
    case 3:
        factor = 1.8808158;
        break;
    case 4:
        factor = 11.862615;
        break;
    case 5:
        factor = 29.447498;
        break;
    case 6:
        factor = 84.016846;
        break;
    case 7:
        factor = 164.79132;
        break;
    default:
        break;
    }
    return earth_years / factor;
}