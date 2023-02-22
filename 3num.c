//Take 3 positive integers input and print the greatest of them//
#include<stdio.h>
int a;
int b;
int c;
int main(){
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);
    if(a>b && a>c){
    printf("a is greatest");
    }
    else if(b>a && b>c){
    printf("b is greatest");
    }
    else if(c>a && c>b){
    printf("c is greatest");
    }
    return 0;
    }
    
    
    
    
    
    
    
    



