#include<stdio.h>
int main(void){
printf("enter age");
int age;
scanf("%d",&age);
if(age>=18)
	{if(age<=50)
		printf("eligible to vote");
	else
		printf("not eligible to vote");}
else
	printf("not eligible to vote");
return 0;
}
