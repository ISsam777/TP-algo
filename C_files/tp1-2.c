
#include<stdio.h>
int main()
{
   int n;
   int M[100][100];
   printf("donner n : ");
   scanf(" %d", &n);
   
   for(int i = 0;i<=n;i++){
     for(int j = 0;j<=n;j++){
      scanf("%d",&M[i][j]);
     }
   }
   printf("aficher la matrice: \n"); 
   for(int i = 0;i<=n;i++){
     for(int j = 0;j<=n;j++){
      printf(" %d ",M[i][j]);
     }
     printf("\n");
   }
   printf("\nafficher la matrice apres echange: \n"); 
   for(int i = 0;i<=n;i++){
     for(int j = 0;j<=n;j++){
      printf(" %d ",M[j][i]);
     }
     printf("\n");
   }



	return 0;
}
