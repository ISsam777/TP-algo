#include<stdio.h>
int main()
{
  char M[5][5]= {{'1','2','3','4','5'},
	        {'7','a','c','8','d'},
		{'c','9','4','z','8'},
		{'5','6','p','n','3'},
		{'2','9','t','m','k'}};
/* 1) afficher le matrice */
    for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           printf(" %c ",M[i][j]);
	   
        }
         printf("\n");
    }
    printf("\n\n\n");
    /* 2) afiicher les lignes d'indice pair */
    printf(" 2) afiicher les lignes d'indice pair \n");
     for(int i=0;i<5;i++){
	     if (i%2==0) {
	     
       for(int j=0;j<5;j++){
           printf(" %c ",M[i][j]);
	   
        }
         printf("\n");
    } 
     }
 printf("\n\n");
/* 3) afiicher les lignes d'indice impair de chaque lignes */
    printf(" 3) afiicher les lignes d'indice  impair de chaque lignes \n");
     for(int i=0;i<5;i++){
	     
       for(int j=0;j<5;j++){
	if(j%2==1){
           printf(" %c ",M[i][j]);	   
        }
       }
         printf("\n");
     }
     printf("\n\n");
/* 4) afiicher le 1er diagonale */
    printf(" 4) afiicher le 1er diagonale \n");
     for(int i=0;i<5;i++){
	     
           printf(" %c ",M[i][i]);	   
        
       }
        
      printf("\n\n");
    /* 5) afficher le 2e diagonale */
      printf("\n afficher le 2e diagonale\n");
      int j=0;
    for(int i=4;i>=0;i--){
            
           printf(" %c ",M[i][j]);
	  j++;
        
         printf("\n");
    }
}
