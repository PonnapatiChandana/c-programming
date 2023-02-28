//Print the nth fibanacci number
#include<stdio.h>
int main(){
    int n;
    int a=1;
    int b=1;
    int sum=1;
    printf("Enter number of terms:");
    scanf("%d",&n);
        for(int i=1;i<=n-2;i=i+1){
           sum=a+b;
           a=b;
           b=sum;
        }
    printf("The %dnth fibanacci is %d",n,sum);  
    return 0;  
}


