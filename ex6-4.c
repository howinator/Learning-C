/* A program that has the functionality of an accumulator calculator
 *    Takes number operator arguments                                */

#include <stdio.h>
#include <stdbool.h>

int main (void){
  
  float accum, entry;
  char operator;
  bool flag;

  flag = true;

  printf ("Begin Calculations\n");
  printf ("-----------------------------------------------------\n");
  while (flag){
    scanf("%f %c", &entry, &operator);

    switch (operator){

      case 'S':
        accum = entry;
        printf ("= %.8f\n", accum);
        break;

      case 'E':
        flag = false;
        break;

      case '+':
        accum += entry;
        printf ("= %.8f\n", accum);
        break;

      case '-':
        accum -= entry;
        printf ("= %.8f\n", accum);
        break;

      case '*':
        accum *= entry;
        printf ("= %.8f\n", accum);
        break;

      case '/':
        if ( entry == 0 ){
          printf ("Division by zero.\n");
        }
        else {
          accum /= entry;
          printf ("= %.8f\n", accum);
        }
        break;
        
      default:
        printf("Unknown operator.\n");
        break;

    }
  }

    printf("--------------------------------------------------------\n");
    printf("End of Calculations.\n");

  return 0;
}
