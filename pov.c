//Two numbers are entered through the keyboard.Write a program to find the value of one number raised to the power of another
#include<stdio.h>
int a;
int b;
int i;
int main(){
    printf("Enter the base:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    int power=1;
    for(i=1;i<=b;i++){
        power=power*a;
       printf("%d raised to %d is %d\n",a,i,power);
    }
    
return 0;
}


