/*Display this GP - 3,12,48,..upto 'n'terms*/
#include<stdio.h>
int n;
int main(){
    printf("Enter upto what number you want:");
    scanf("%d",&n);
    printf("The GP is as follows:");
    int a=3;
    for(int i=1;i<=n;i=i+1){
        printf("%d ",a);
     a=a*4;
    }
return 0;    
}
