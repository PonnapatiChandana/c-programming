/*write a program to print even numbers from 1 to 100,using continue statment*/
#include<stdio.h>
int main(){
    for( int i=1;i<=100;i=i+1){
       if(i%2!=0){
        continue;
       }
    printf("%d ",i);}
return 0;
}
