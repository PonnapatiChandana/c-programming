//read the student id ,branch(use char data type),age,phonenumber,marks of the 4 subjects and calculate average number
#include<stdio.h>
void main(){
	char id[10],Name[100],branch[10];
	long int phone_no;
	int age;
	float s1,s2,s3,s4,average;
	printf("enter student id:");
	scanf("%s",&id);
	printf("enter student Name:");
	scanf("%s",&Name);
	printf("enter student branch:");
	scanf("%s",&branch);
	printf("enter student age=");
	scanf("%d",&age);
	printf("enter student phone number:");
	scanf("%ld",&phone_no);
	printf("enter marks in first subject:");
	scanf("%f",&s1);
	printf("enter marks in second subject:");
	scanf("%f",&s2);
	printf("enter marks in third subject:");
	scanf("%f",&s3);
	printf("enter marks in fourth subject:");
	scanf("%f",&s4);
	average=(s1+s2+s3+s4)/4;
	printf("id No:%s\nName:%s\nbranch:%s\n",id,Name,branch);
	printf("Age:%d\n",age);
	printf("phone_no:%ld\n",phone_no);
	printf("Average=%f\n",average);
}
