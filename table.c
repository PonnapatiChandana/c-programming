/*Print the table of 'n'. Here 'n' is a integer which user will input*/
#include<stdio.h>
int n;
int main(){
    printf("Enter which table you want:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
return 0;
}
