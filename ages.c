/*if the ages of Ram,Shyam and Ajay are input through the keyword,write a program to determine the youngest of the three
using nested if without logical operators
*/
#include<stdio.h>
int a;
int b;
int c;
int main(){
    printf("Enter the age of Ram:");
    scanf("%d",&a);
    printf("Enter the age of Shyam:");
    scanf("%d",&b);
    printf("Enter the age of Ajay:");
    scanf("%d",&c);
    if(a<b){
        if(a<c){
            printf("Ram is youngest");
        }
        else{
            printf("Ajay is youngest");
        }
    }
    else{
        if(b<c){
            printf("Shyam is youngest");
        }
        else{
            printf("Ajay is youngest");
        }
    }
    return 0;
}
    
