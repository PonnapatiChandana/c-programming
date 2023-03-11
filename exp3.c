//write a c program to find maximum and mininmum of five numbers using conditional oprators?
#include<stdio.h>
int main(){
	//finding maximum and minimum
	long int a,b,c,d,e,maximum,minimum;
	printf("enter the first number=");
	scanf("%ld",&a);
	printf("enter the second number=");
	scanf("%ld",&b);
	printf("enter the third number=");
	scanf("%ld",&c);
	printf("enter the fourth number=");
	scanf("%ld",&d);
	printf("enter the fifth number=");
	scanf("%ld",&e);
	maximum=(a>b&&a>c&&a>d&&a>e)?a:(b>a&&b>c&&b>d&&b>e)?b:(c>a&&c>b&&c>d&&c>e)?c:(d>a&&d>b&&d>c&&d>e)?d:e;
	printf("%ld is the maximum number \n",maximum);
	minimum=(a<b&&a<c&&a<d&&a<e)?a:(b<a&&b<c&&b<d&&b<e)?b:(c<a&&c<b&&c<d&&c<e)?c:(d<a&&d<b&&d<c&&d<e)?d:e;
	printf("%ld is the minimum number \n",minimum);
	return 0;
}

         

