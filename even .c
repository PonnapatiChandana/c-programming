/* take  positive integer input and tell if it is even or odd*/
#include<stdio.h>
int n;
int main(){
    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even",n);
    }
    else{
        printf("%d is odd",n);
    }
    return 0;
}
