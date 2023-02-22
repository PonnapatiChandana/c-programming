/* GIVEN THE LENGTH AND BREADTH OF A RECTANGLE,WRITE A PROGRAM TO FIND WHETHER THE AREA OF THE 
RECTANGLE IS GREATER THAN ITS PERIMETER*/
#include<stdio.h>
int l;
int b;
int main(){
    printf("enter length of the rectangle:");
    scanf("%d",&l);
    printf("enter breadth of the rectangle:");
    scanf("%d",&b);
    int area;
    area=l*b;
    printf("area of the rectangle is %d\n",area);
    int perimeter;
    perimeter= (l+b)*2;
    printf("perimeter of the reactangle is %d\n",perimeter);
    if(area>perimeter){
        printf("area is greater than perimeter");
    }
    else if(area<perimeter){
        printf("perimeter is greater than area");
    }
    else{
        printf("area and perimeter are same");
    }
    return 0;
}
