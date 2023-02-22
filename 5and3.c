/*Take positive integer input and tell if it is divisible by 5 and 3*/
#include<stdio.h>
int n;
int main(){
    printf("enter any number:");
    scanf("%d",&n);
    if(n%5==0  && n%3==0){
        printf("%d is divisible by 5 and 3",n);
    }
    else if(n%5==0 && n%3!=0){
        printf("%d is divisible by 5 but not with 3",n);
    }
    else if(n%3==0 && n%5!=0){
        printf("%d is divisible by 3 but not with 5",n);
    }
    else{
        printf("%d is not divisible by 5 and 3",n);
    }
return 0;
}
