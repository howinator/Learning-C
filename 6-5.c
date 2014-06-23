// Program to determine if a year is a leap year
//
#include <stdio.h>

int main (void){

  int year;

  printf ("Enter a year: ");
  scanf ("%i", &year);

  if ( (year % 4 == 0 && year % 100 !=0) || year % 400 == 0 )
    printf("%i is a leap year.\n", year);
  else
    printf("%i is NOT a leap year.\n", year);

  return 0;

}
