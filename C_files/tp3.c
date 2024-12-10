#include <stdio.h>
#include <stdlib.h>

// defini element typedef
//
typedef struct element {

  int val;
  struct element *suivant;
} element;

// creer un liste vide
//
element *creerListe() {
  element *L = (element *)malloc(sizeof(element));
  L->suivant = NULL;
  return L;
}

// charger list function
//
element *chargerListe(int *Tab, int n, element *L) {

  element *temp = (element *)malloc(sizeof(element));
  temp = L;
  temp->val = Tab[0];
  for (int i = 1; i < 10; i++) {
    temp->suivant = (element *)malloc(sizeof(element));
    temp = temp->suivant;
    temp->val = Tab[i];
  }

  return L;
}

// afficher liste fonction
//
void afficherListe(element *L) {
  element *temp = L;
  while (temp != NULL) {
    printf(" %d -> ", temp->val);
    temp = temp->suivant;
  }
}

// fonction supprimmer supprimerEnFin
//
element *supprimerEnFin(element *L) {
  element *temp = L;
  while (temp->suivant->suivant != NULL) {
    temp = temp->suivant;
  }
  free(temp->suivant);
  temp->suivant = NULL;
  return L;
}

// ajouter en debut
//
element *ajouterEnDebut(element *L, int val) {

  element *new = (element *)malloc(sizeof(element));
  element *temp = L;
  new->val = val;
  L = new;
  new->suivant = temp;

  return new;
}

// vider list
//
void viderListe(element *L) {
  element *temp = L;
  while (temp != NULL) {
    L = L->suivant;
    free(temp);
    temp = L;
  }
  printf("\nlist est vide");
}

int main() {
  int Tab[10] = {1, 3, 5, 7, 8, 10, 9, 11, 13, 20};
  element *liste = creerListe();
  element *L = chargerListe(Tab, 10, liste);
  afficherListe(L);
  printf("\n");
  element *L1 = supprimerEnFin(L);
  afficherListe(L1);
  printf("\n");
  element *L2 = ajouterEnDebut(L1, 40);
  afficherListe(L2);
  viderListe(L2);
  return 0;
}
