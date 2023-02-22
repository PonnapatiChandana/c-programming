//Take 3 numbers input and tell they can be sides of a triangle//
#include<stdio.h>
int a;
int b;
int c;
int main(){
    printf("enter the first side:");
    scanf("%d",&a);
    printf("enter the second side:");
    scanf("%d",&b);
    printf("enter the third side:");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("triangle is possible");
    }
    else{
        printf("not possible");
    }}
