/* take integer input and print the absolute value of that integer*/
#include<stdio.h>
int n;
int main(){
    printf("enter a number:");
    scanf("%d",&n);
    if(n<0){
        n=n*(-1);
        }
    printf(" the absolute value is %d",n);
    return 0;
}
