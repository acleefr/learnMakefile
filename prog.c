#include <stdio.h> 
float fahr (int); 
main() { 
  int f; float c; 
  scanf ("%d", &f); 
  c = fahr(f); 
  printf ("En Celcius = %f\n", c); 
} 
float fahr(int f) { 
  /*  Convertit Temperature fahrenheit  
  en Celcius */ 
  float c; 
  c = 5./9 * (f - 32); 
  return c; 
}