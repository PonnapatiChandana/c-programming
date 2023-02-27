//write a program to find the sum of the digits in the number:
#include<stdio.h>
int main(){
  int n;
  int i;
  printf("Enter any number:");
  scanf("%d",&n);
  int sum=0;
  while(n>0){
    i=n%10; 
    sum=sum+i;
     n=n/10;
  }
  printf("The number of digits in the given number are %d",sum);
  return 0;
}
