
#include "tp2.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  char *ch;
  int t;
  // saiser la max de la matrice
  //
  printf("saisir la taille maximale de la chaine : ");
  scanf("%d", &t);
  getchar();

  // chrger le chaine
  //
  printf("charger chaine: \n");
  ch = ChargerChaine(t);
  int m = longueur(ch);

  // charger chaine en tab
  //
  char Tab[m], T[m];
  ChargerTab(ch, Tab);
  printf("\n");

  // afficher tab non inverser
  //
  printf("afficher tab : \n");
  afficherTab(Tab, m);
  printf("\n");

  // inverser et afficher Tab
  //
  printf("print chaine inverser: \n");
  InverserTab(Tab, T, m);
  afficherTab(T, m);

  // free ch
  //
  free(ch);

  return 0;
}
