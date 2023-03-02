/*Print the given pattern
*****
*****
******/
#include<stdio.h>
int main(){
   int m;
   int n;
   printf("Enter number of rows:");
   scanf("%d",&m);
   printf("Enter number of cloumns :");
   scanf("%d",&n);
   for(int i=1;i<=m;i++){
      for(int j=1;j<=n;j++){
         printf("*");
      }
      printf("\n");
   }
   return 0;
}


