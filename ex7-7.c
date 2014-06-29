// Sieve of Erastothenes algorithm

#include <stdio.h>

int main (void)
{

  int                 i, j, primeIndex;
  const int           numberOfPrimes = 150;
  long unsigned int   P[numberOfPrimes + 1], primes[numberOfPrimes-1];


  for ( i = 2; i <= numberOfPrimes; ++i )
  {
    P[i] = 0;
  }


  // the array that stores primes is indexed differently than the true/false
  // array, P[]
  primeIndex = 0;

  for ( i = 2; i <= numberOfPrimes;  ++i )
  {
    // If the ith value is 0 (false) i + 2 is prime
    if ( !P[i] )
    {
      primes[primeIndex] = i;
      ++primeIndex;
    }
    for ( j = 1; ( i * j ) <= numberOfPrimes; ++j )
    {
      P[i * j] = 1;
    }
  }

  for ( i = 0; i <= primeIndex; ++i )
  {
    printf ("%lu ", primes[i]);
  }

  printf ("\n");

  return 0;

}
