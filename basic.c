/*Print hello world 'n'times.Take 'n' as input from user*/
#include<stdio.h>
int n;
int i;
int main(){
    printf("Enter how many times you want to repeat:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Hello World !\n");
    }
    return 0;
}    

