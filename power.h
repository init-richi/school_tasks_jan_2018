/*
 * Power
 * by Richard Mietz FI17A
 * 27.01.2018
 *
 * This is a library for the "Power to"-function
 * The function takes an int as arg and makes it an exp of 2
 * returns 2^exponent
 */

int power(int exp){

  int product = 1;
  if (exp != 0){
    while (exp != 0){
      product *= 2;
      exp--;
    }
    return product;
  }
  else {
    return 1;
  }
}
