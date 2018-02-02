/*
 * According Bits
 * by Richard Mietz FI17A
 * 26.01.2018
 *
 * This program takes 2 Integers as arguments and compares their bit-structure
 * for every 1 of the first INT it takes the matching bit of the second INT
 * then it generates a new INT out of the 1 and 0 of the comparsion
 *
 */
#include <stdio.h>
#include <stdint.h>
#include "power.h"

int accordBits(uint8_t in1, uint8_t in2) {

  uint8_t out = 0;
  uint8_t c;

  for (c = 8; c != 0; c--){
    //for loop iterates a counter "c" from 8 to 0
    if (in1 & power(c-1)){          //Checks if binary form of in1 has an exponent of 2 in power of c-1, see power()

      int buff = in2 & power(c-1);  //if so, check if same exp of 2 is in in2 and add 1 to out
      if (buff != 0){
        out ++;
      }

      if (c > 1){                  //after adding and if c >1 shift out 1 to left
        out = out << 1;
      }
    }
  }
  return out;
}


int main(int argc, char *argv[]) {

  if (argc == 3){  //check for arg length
    uint8_t val1 = (uint8_t)atoi(argv[1]); //converting char to uint8_t with atoi
    uint8_t val2 = (uint8_t)atoi(argv[2]); //using uint8_t for Integers from 0 to 255
    printf("%i\n", accordBits(val1, val2));
  }
  else {
    printf("Error too few/many args you need 2 Integers from 0 to 255\nExiting");
  }
  return 0;

}
