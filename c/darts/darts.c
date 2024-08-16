#include "darts.h"
#include <math.h>
#include <stdbool.h>

const float INNER_RING = 1.0f;
const float MIDDLE_RING = 5.0f;
const float OUTER_RING = 10.0f;

static float radius(coordinate_t throw)
{
   return hypot(throw.x, throw.y);
}

static bool throw(float radius, float ring)
{
   return radius <= ring;
}

uint8_t score(coordinate_t dart_throw)
{
   float is_within = radius(dart_throw);

   if (throw(is_within, INNER_RING)) {
      return 10;
   }
   if (throw(is_within, MIDDLE_RING)) {
      return 5;
   }
   if (throw(is_within, OUTER_RING)) {
      return 1;
   }
   return 0;
}