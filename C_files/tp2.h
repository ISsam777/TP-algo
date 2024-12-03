#include <stdio.h>
#include <stdlib.h>

char *ChargerChaine(int n) {
  char *str = (char *)malloc((n+1) * (sizeof(char)));
  fgets(str, n+1, stdin);
  return str;
}

int longueur(char *ch) {
  int ctr = 0;
  while (*ch != '\0') {
    ctr++;
    ch++;
  }
  return ctr;
}

void ChargerTab(char *p, char Tab[]) {
  int i = 0;
  while (*p != '\0') {
    Tab[i] = *p;
    p++;
    i++;
  }
  Tab[i] = '\0';
}

void InverserTab(char Tab[], char T[], int m) {
  int ctr = 0;
  for (int i = m - 1; i >= 0; i--) {
    T[ctr] = Tab[i];
    ctr++;
  }
  T[ctr] = '\0';
}

void afficherTab(char T[], int m) { 
  printf("%s", T); 
}
