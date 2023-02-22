/*Any year is input through the keyboard.write a program to determine whether the year is a leap year or not.(considering leap year occurs after every 4 years)*/
#include<stdio.h>
int n;
int main(){
    printf("enter a number:");
    scanf("%d",&n);
    if(n%4==0){
        printf("%d is a leap year",n);
    }
    else{
        printf("%d is not  a leap year",n);
    }
    return 0;
}
