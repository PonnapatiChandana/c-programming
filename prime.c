/*write a program to check whether a given number is prime number or composite*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d,",&n);
    for( int i=2;i<=(n-1);i=i+1){
       if(n%i==0){
        printf("%d is composite number:",n);
        break ;
       }
       else{
        printf("%d is prime number",n);
        break;
       }
    }
return 0;
}
