#include "prod.c"
#include "som.c"
#include <stdio.h>

main(){ 
  int x; int y; int c; int d;
  printf ("X : ");
  scanf ("%i",&x); 
  printf ("Y : ");
  scanf ("%i",&y); 
  c = produit(x,y); 
  printf ("Produit de X et Y : %d\n",c); 
  d = somme(x, y);
  printf ("Somme de X et Y : %d\n",d);
} 