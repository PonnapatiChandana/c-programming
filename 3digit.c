/*Take positive integer input and tell if it is a three digit or not.*/
#include<stdio.h>
int n;
int main(){
    printf("enter any number:");
    scanf("%d",&n);
    if(n<1000 && n>99){
        printf("%d is a three digit number",n);
    }
    else{
        printf("%d is not a three digit number",n);
    }
return 0;
}
