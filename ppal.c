#include <stdio.h> 
#include "fahr.h"  /* noter ce nouveau include */ 
main() { 
  int f; float c; 
  scanf ("%d", &f); 
  c = fahr(f); 
  printf ("En Celcius = %fn", c); 
}