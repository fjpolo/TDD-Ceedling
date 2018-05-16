#include <stdio.h>
#include "fuzzbuzz.h"
void main(void){
  //
  for(int i = 0; i <= 100; i++){
    printf("%d->",i);
    color_t color = get_color(i);
    switch(color){
      case RED:
        printf("RED");
        break;
      case GREEN:
        printf("GREEN");
        break;
      case BLUE:
        printf("BLUE");
        break;
      case NONE:
        printf("NONE");
        break;
    }
    printf("\n");
  }
}
