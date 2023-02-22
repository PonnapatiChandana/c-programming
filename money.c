/*If cost price and selling price of an item is input through the keyboard,write a program to determine whether the seller has made profit or incurred loss.Also determine how much profit he made or loss he incurred*/
#include<stdio.h>
int cp;
int sp;
int main(){
     printf("enter the cost price:");
     scanf("%d",&cp);
     printf("enter the selling price:");
     scanf("%d",&sp);
     if(sp>cp){
     printf("got profit of");
     int profit;
     profit=sp-cp;
     printf(" %d",profit);
     }
     else if(sp==cp){
     printf("No profit or loss");
     }
     else{
     printf("got loss by");
     int loss;
     loss=cp-sp;
     printf(" %d",loss);  
 }
 return 0;
 }
