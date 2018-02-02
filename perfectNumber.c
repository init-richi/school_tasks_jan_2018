/*
 * Perfect Number
 * by Richard Mietz FI17A
 * 26.01.2018
 *
 * This program takes an INT as argument and prints out its divisors, the sum
 * of them and adds the string "perfect" if the sum and given number match to the output
 *
 */

 #include <stdio.h>

int perfect(int num){
  int quotient;
  int divisor;

  int counter = 0;
  int out;

  int sum = 0;

  for (divisor = 1; divisor < num; divisor++){
    // loop iterating the divisor for division-check (if its divideable without remain)
    if ( num%divisor == 0 ){
      out = divisor;
      if (counter == 0) printf("%d", out); //if-else-case to check if output-item is the first item
      else printf("+%d",  out);            //so no +x+y+z but x+y+z output
      sum += out; // sum all outputs
      counter ++;
    }
  }
  printf("=%d ", sum );
  if (sum == num) printf("perfect\n"); //if-case adds the word "perfect" if sum == num
  else printf("\n");
}

int main(int argc, char *argv[]){
  int val1 = (int)atoi(argv[1]);
  perfect(val1);
  return 0;

}
