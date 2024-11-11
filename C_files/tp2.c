
#include "tp2.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  char A[6] = "hello";
  int m = longueur(A);
  char *T = (char *)malloc(m * sizeof(char));
  /*printf("%s", ChargerChaine(20));*/
  /*printf("%d", longueur(A));*/
  /*ChargerTab("hello world", A);*/
  InverserTab(A, T, m);
  printf("%s", T);
  free(0);
  return 0;
}
