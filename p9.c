/*
1
A B
1 2 3
A B C D*/

#include<stdio.h>
int main(){
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a=1;
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",(char)a+64);
                a=a+1;
            }
            else{
            printf("%d ",j);}
         } printf("\n");
          }
          return 0;

}

