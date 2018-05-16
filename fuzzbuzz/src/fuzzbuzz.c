#include <stdbool.h>
#include "fuzzbuzz.h"

static bool is_multiple_5(int value){
  return ((value % 5) == 0);
}

static bool is_multiple_3(int value){
  return ((value % 3) == 0);
}

color_t get_color(int value){
  if(is_multiple_3(value) && is_multiple_5(value)) return BLUE;
  else if(is_multiple_5(value)) return RED;
  else if(is_multiple_3(value)) return GREEN;
  else return NONE;
}
