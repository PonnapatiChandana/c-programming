/*Display this GP-100,60,25,..UPTO'n' terms*/
#include<stdio.h>
int n;
int main(){
    printf("Enter how many numbers you want:");
    scanf("%d",&n);
    printf("The GP is as follows:");
    float a=100;
    for(int i=1;i<=n;i=i+1){
        printf("%f ",a);
        a=a/2;
    }
return 0;    
}
