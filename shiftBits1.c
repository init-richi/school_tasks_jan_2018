/*
 * Shifting Bits
 * by Richard Mietz FI17A
 * 26.01.2018
 *
 * This program takes 1 INT as an argument, rotates the bits of that int
 * and prints them
 */

#include <stdint.h>
#include <stdio.h>
#include "power.h"

int rotateBits(uint8_t in){
/* function takes input uint8_t and shift the bits to left with a iterating for-loop
 * the for-loop prints the decimal values of the shifted integer
 */

  int c;
  for (c = 0; c < 7; c ++){
    if (in & power(7)){
      in = in << 1;
      in ++;
    }
    else {
      in = in << 1;
    }
    printf("%d ", in);

  }
  printf("\n");

}



int main(int argc, char *argv[]){
  if (argc == 2){
    uint8_t val1 = (uint8_t)atoi(argv[1]);
    rotateBits(val1);
  }
  else {
    printf("Too few/many args, you need 1 Integer from 0 to 255\nExiting now!");
  }
  return 0;
}
