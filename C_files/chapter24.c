// example program #1 from chapter 24 of absolute beginners guide
// to C, 3rd Edition
// file chapter24ex1.c 


#include<stdio.h>
int main(){
    int kids;
    int *pkids;
    float price;
    float * pPrice;
    char code;
    char *pCode;

    price =17.50;
    pPrice = &price;

    printf("\nHow many kids are you taking to the water park?\n");
    scanf(" %d",&kids);

    pkids = &kids;

   printf("\n Do you have a discount tickets for the park?\n");
   printf("\nEnter E for Employee Discount , S for save more\n");
   printf("discount, or N for No Discount: ");
   scanf(" %c", &code);

   pCode = &code;

   printf("\n First let's do it with the variables: \n");
   printf("you've got the %d kids ...\n", kids);
   switch (code) {
	   case ('E'):
		   printf("The employee discount saves you 25%% on the");
		   printf("$%.2f pric",price);
		   printf("\nTotal tickets cost : $%.2f",(price*.75*kids));
		   break;
	   case('S'):
		   printf("The save more discount saves you 15%% on the ");
		   printf("$%.2f price", price);
		   printf("\nTotal ticket cost: $%.2f", (price*.85*kids));

           default:
		   printf("you will be payed full of the price");
		   printf("$%.2f price", price);

   }
   // the same code but with deferenced pointers   
   printf("\n\n\n now let's do it with pointers : \n");
   
   printf("\n First let's do it with the variables: \n");
   printf("you've got the %d kids ...\n", *pkids);
   switch (code) {
	   case ('E'):
		   printf("The employee discount saves you 25%% on the");
		   printf("$%.2f pric",*pPrice);
		   printf("\nTotal tickets cost : $%.2f",(*pPrice*.75* *pkids));
		   break;
	   case('S'):
		   printf("The save more discount saves you 15%% on the ");
		   printf("$%.2f price", *pPrice);
		   printf("\nTotal ticket cost: $%.2f", (*pPrice*.85* *pkids));

           default:
		   printf("you will be payed full of the price");
		   printf("$%.2f price", *pPrice);

   }    
       return 0;
}
