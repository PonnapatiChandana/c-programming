/*Display this AP-1,3,5,7,9 upto 'n' terms*/
#include<stdio.h>
int n;
int main(){
    printf("Enter upto how many numbers you want:");
    scanf("%d",&n);
    printf("The AP is as follows:");
    for(int i=1;i<=(2*n-1);i=i+2){
        printf("%d ",i);
    }
return 0;    
}
