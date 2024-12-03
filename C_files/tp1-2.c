#include <stdio.h>
int main() {

  int n;
  int M[100][100];
  int N[100][100];
  printf("donner n : ");
  scanf(" %d", &n);

  // initializer la matrice

  for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {

      scanf("%d", &M[i][j]);
    }
  }
  // afficher la matrice
  printf("aficher la matrice: \n");
  for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {

      printf(" %d ", M[i][j]);
    }
    printf("\n");
  }

  // echanger la matrice
  for (int i = 0; i < n; i++) {

    for (int j = i + 1; j < n; j++) {
      int tmp = M[i][j];
      M[i][j] = M[j][i];
      M[j][i] = tmp;
    }

    printf("\n");
  }
  // aficher la matrice apres echange
  printf("\nla matrice apres echange: \n");

  for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {

      printf(" %d ", M[i][j]);
    }

    printf("\n");
  }

  return 0;
}
