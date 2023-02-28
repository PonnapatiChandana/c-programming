//Print the factorial of a given number n.
#include<stdio.h>
int main(){
    int n;
    int f=1;
    printf("Enter number of terms:");
    scanf("%d",&n);
        for(int i=1;i<=n;i=i+1){
            f=f*i;

        }
    printf("Factorial of %d:%d",n,f);
}

