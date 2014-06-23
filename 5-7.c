/* Program to find the gratest common divisor
 *        if twi ninnegative integer values */

#include <stdio.h>

int main (void){

  int u, v, temp;

  printf ("Please type in two nonnegative integers.\n");
  scanf("%i%i", &u, &v);


  while ( v != 0 ){
    temp = u % v;
    u = v;
    v = temp;
  }

  printf("Their GCD is %i\n", u);

  return 0;
}
