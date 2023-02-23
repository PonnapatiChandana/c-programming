/*Display this GP - 1,2,4,8,16,32/..upto 'n'terms*/
#include<stdio.h>
int n;
int main(){
    printf("Enter upto what number you want:");
    scanf("%d",&n);
    printf("The GP is as follows:");
    int a=1;
    for(int i=1;i<=n;i=i+1){
        printf("%d ",a);
     a=a*2;
    }
return 0;    
}
