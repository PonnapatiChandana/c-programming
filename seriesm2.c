//write a program to print sum of the series.1-2+3-4+5-6...up to n terms
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter number of terms:");
    scanf("%d",&n);
        if(n%2==0){
            sum=-n/2;
        }
        else{
            sum=(-n/2)+n;
        }
    printf("Sum of the series:%d",sum);
}
