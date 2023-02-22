/*Given a point (x,y),write a program to find out if it lies on the x-axis,y-axis or at the orihin,viz.(0,0).*/
#include<stdio.h>
int x1;
int y2;
int main(){
    printf("enter x1 value:");
    scanf("%d",&x1);
    printf("enter y1:");
    scanf("%d",&y2);  
    if(x1==0 && y2==0){
        printf("it is at origin");
    }
    else if(y2==0){
        printf("the point lie on x-axis");
    }
    else if(x1==0){
        printf("the point lie on y-axis");
    }
  
    else{
        printf("the point is somewhere on the quadrants");
    }
return 0;
}
