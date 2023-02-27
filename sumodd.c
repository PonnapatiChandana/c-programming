//write a program to count digits of a given number.
#include<stdio.h>
int main(){
  int n;
  int i;
  printf("Enter any number:");
  scanf("%d",&n);
  int sum=0;
  while(n>0){
         i=n%10;
         if(n%2!=0){
        sum=sum+i; }
     n=n/10;}
  printf("The sum of even digits in the number is %d",sum);
  return 0;
}

