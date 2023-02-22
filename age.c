//if the ages of ram,shyam and ajay are input through the keyboard,write a program to determine the youngest of the three//
#include<stdio.h>
int a;
int b;
int c;
int main(){
    printf("Enter the age of ram:");
    scanf("%d",&a);
    printf("Enter the age of shyam:");
    scanf("%d",&b);
    printf("Enter the age of ajay:");
    scanf("%d",&c);
    if(a==b || b==c || a==c){
        if(a==b && b==c){
            printf("there ages are equal");
        }
        else if(a==b){
             printf(" ram and shyam as same age");
             if(a>c){
                printf("ajay is youngest");}
            else{
                printf("ram and shyam are youngest");
            }}
        else if(b==c){
            printf("shyam and ajay ages are equal");
            if(a>c){
            printf("shyam and ajay are youngest");}
            else{
                printf("ram is youngest");
            }
        }
        else if(a==c){
            printf("ram and ajay of same age");
            if(a>b){
                printf("shyam is youngest");
            }
            else{
                printf("ram and ajay is youngest");
            }
             }
         }
    else if(a<b && a<c){
        printf("ram is youngest");
    }
    else if(b<a && b<c){
        printf("shyam is youngest");
    } 
    else if(c<a && c<b){
        printf("ajay is youngest");
    }
    return 0;
    }
