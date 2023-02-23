/*Display this AP-4,7,10,13,16. upto 'n' terms*/
#include<stdio.h>
int n;
int main(){
    printf("Enter upto what number you want:");
    scanf("%d",&n);
    printf("The AP is as follows:");
    for(int i=4;i<=(3*n+1);i=i+3){
        printf("%d ",i);
    }
return 0;    
}
