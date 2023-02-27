//Write a program to print all the ASCII values and their equivalent characters of 26 aplhabets using while loop
#include<stdio.h>
int main(){
int i=65;
while(i<=90){
    char ch= (char)i;
    printf("%c ASCII value is %d\n",ch,i);
    i=i+1;
}
return 0;
}


