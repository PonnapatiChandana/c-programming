/*Print the given pattern
*
* *
* * *
*/
#include<stdio.h>
int main(){
   int n;
   printf("Enter the value:");
   scanf("%d",&n);
   for(int i=1;i<=n;i=i+1){
      for(int j=1; j<=i;j++){
         printf("* ");
      }
      printf("\n");
   }
}
