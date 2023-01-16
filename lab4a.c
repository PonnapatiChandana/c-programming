//Read 2 integer numbers and find the relationship between them.
#include<stdio.h>
void main()
{
 int a,b;
 printf("Enter first number = ");
 scanf("%d",&a);
 printf("Enter second number = ");
 scanf("%d",&b);
 if(a == b)
    {
       printf("%d = %d \n ",a, b);
    }
 else if(a > b)
    {
       printf("%d > %d \n",a, b);
       printf("%d < %d \n",b, a);
    }
 else if(b > a)
    {
       printf("%d > %d \n ", b, a);
       printf("%d < %d \n ", a, b);
    }
 }
 	 
