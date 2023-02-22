/*Given three points (x1,y1),(x2,y2)and (x3,y3),wrte a program to check if all the three points fall on one straight line*/
#include<stdio.h>
double x1,x2,x3;
double y2,y3;
double y1;
int main(){
    printf("Enter value x1:");
    scanf("%lf",&x1);
    printf("Enter value x2:");
    scanf("%lf",&x2);
    printf("Enter value x3:");
    scanf("%lf",&x3);
    printf("Enter value y1:");
    scanf("%lf",&y1); 
    printf("Enter value y2:");
    scanf("%lf",&y2); 
    printf("Enter value y3:");
    scanf("%lf",&y3);
    double s1;
    double s2;
    s1=(y2-y1)/(x2-x1);
    s2=(y3-y2)/(x3-x2);
    if(s1==s2){
        printf("they fall on same line");
    }
    else{
        printf("they dont fall on same line");
    }
    return 0;
}

