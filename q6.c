#include<stdio.h>
int main(void){
int age;
printf("enter age of person:\n");
scanf("%d",&age);
if(age>=18)
	printf("person is eligible to vote\n");
else
	printf("person is not eligible to vote\n");
return 0;}
