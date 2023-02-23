/*write a program to print n natural numbers and their sum*/
#include<stdio.h>
int main(){
    int n;
    printf("enter how many numbers you want:");
    scanf("%d,",&n);
    for( int i=1;i<=n;i=i+1){
       printf("%d ",i);  
    }
    int sum;
    sum=(n*(n+1))/2;
    printf("\n%d is the sum of %d natural numbers",sum,n);
    return 0;
}
