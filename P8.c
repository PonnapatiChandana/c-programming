/* Print the pattern
A B C D
A B C D
A B C D */
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a=1;
        for(int j=1;j<=n;j++){
            printf("%c ",(char)a+64);
            a++;
        }
        printf("\n");
    }
    return 0;
}


