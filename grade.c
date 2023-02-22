/* Take input percentage of a student and print the grade according to marks:
1)91-100 Excellent
2)81-90  Very Good
3)71-80  Good
4)61-70  Can do better
5)51-60  Average
6)41-50  Below Average
7)<40    Fail*/
#include<stdio.h>
int a;
int main(){
    printf("Enter the percentage of the student:");
    scanf("%d",&a);
    if(a>90 && a<101){
        printf("The student is Excellent ");
    }
    else if(a>80 && a<91){
        printf("The student is Very Good ");
    }
    else if(a>70 && a<81){
        printf("The student is Good");
    }
    else if(a>60 && a<71){
        printf("The student Can do better");
    }
    else if(a>50 && a<61){
        printf("The student is Average");
    }
    else if(a>40 && a<51){
        printf("The student is Below average");
    }
    else if(a<=40){
        printf("the student is fail");
    }
    else{
        printf("Enter proper percentage");
    }}
    return 0;
}
    
