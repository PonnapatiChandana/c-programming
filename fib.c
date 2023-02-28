//Print the 'n' fibanacci number
#include<stdio.h>
int main(){
    int n;
    int a=1;
    int b=1;
    int sum=1;
    printf("Enter number of terms:");
    scanf("%d",&n); 
    printf("The 1nth fibanacci is 1\n");
    printf("The 2nth fibanacci is 1\n");
        for(int i=1;i<=n-2;i=i+1){
           sum=a+b;
           a=b;
           b=sum; 
           printf("The %dnth fibanacci is %d\n",i+2,sum);
        }
    
    return 0;  
}


