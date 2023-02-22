//Take 3 positive integers input and print the greatest of them//
#include<stdio.h>
int a;
int b;
int c;
int main(){
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if( a>b && a>c){
        printf("first number is greatest");
    }
    else if(b>a && b>c){
        printf("second number is greatest");
    }
    else if(c>a && c>b){
        printf("third number is greatest");
    }
    return 0;
}
    
