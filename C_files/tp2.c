
#include "tp2.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  char *ch;
  int s;
  /*printf("veuillez saisir la taille maximale de la chaine : ");*/
  /*scanf(" %d", &s);*/
  ch = ChargerChaine(10);
  int m = longueur(ch);
  char Tab[m], T[m];
  ChargerTab(ch, Tab);
  printf("\n");
  afficherTab(Tab, m);
  printf("\n");
  InverserTab(Tab, T, m);
  afficherTab(T, m);
  free(ch);
  return 0;
}
