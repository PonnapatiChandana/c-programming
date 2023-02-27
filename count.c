//write a program to count digits of a given number.
#include<stdio.h>
int main(){
  int n;
  printf("Enter any number:");
  scanf("%d",&n);
  int count=0;
  while(n>0){
    n=n/10;
      count=count+1;
  }
  printf("The number of digits in the given number are %d",count);
  return 0;
}
