/*print the given pattern
1
1 2 
1 2 3 
*/
#include<stdio.h>
int main()
{
   int n;
   printf("Enter the value:");
   scanf("%d",&n);
   for (int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
         printf("%d ",j);
      }
      printf("\n");
   }
   return 0;
}
