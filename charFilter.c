/*
 * Char Filter
 * by Richard Mietz FI17A
 * 26.01.2018
 *
 * This program takes 2 Strings as Arguments and iterates the Chars of the second
 * String threw the Chars of the first one and prints them
 *
 */

#include <string.h>
#include <stdio.h>

int charFilter(char base[], char compared[]){
  //function takes 2 strings as args and outputs the matching letters
  int c1, c2;
  int c3 = 0;
  int baseLen = strlen(base);
  int compLen = strlen(compared);
  char out[compLen];

  //nested for-loop checks if chars from first arg(base) is char compared[c1]
  //if so it appends char to output
  for (c1 = 0; c1 <= compLen; c1 ++ ){
    for (c2 = 0; c2 <= baseLen; c2 ++ ){
      if (compared[c1] == base[c2]){
        out[c3] = compared[c1];
        c3++;
      }
    }
  }
  printf("%s\n", out);
  return 0;
}

int main(int argc, char *argv[]){
  printf("%s\n", charFilter(argv[1], argv[2]));
  return 0;
}
