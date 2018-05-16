#ifndef _FUZZBUZZ_H
#define _FUZZBUZZ_H

//
typedef enum{
  NONE,
  GREEN,
  RED,
  BLUE
}color_t;

//
color_t get_color(int value);

#endif // _FUZZBUZZ_H
