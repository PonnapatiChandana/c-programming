 //write two c programs to involving the majarioty operators 
#include<stdio.h>
int main(){
	//operatinon 1
	int x,y,z,operation1;
	printf("enter the first value=");
	scanf("%d",&x);
	printf("enter the second value=");
	scanf("%d",&y);
	printf("enter the third value=");
	scanf("%d",&z);
	operation1=y--+ ++x+y%z>y^x&&z|x!=(z*y>>2/8);
	printf("%d the output of the operation1 \n",operation1);
	int a,b,c,operation2;
	printf("enter the first value=");
	scanf("%d",&a);
	printf("enter the second value=");
	scanf("%d",&b);
	printf("enter the third value=");
	scanf("%d",&c);
	operation2=++b<<3*1||c- --a<(b&c%2*5);
	printf("%d the output of the operation2 \n",operation2);
	return 0;
}
