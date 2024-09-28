#include<stdio.h>
int main(void){
printf("enter 3 no.s\n");
int num1,num2,num3;
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2){
	if(num1>num3)
		printf("num1 is maximum");
	else
		printf("num3 is maximum");
}
else if(num2>num1){
	if(num2>num3)
		printf("num2 is maximum");
	else
		printf("num3 is maximum");
}
return 0;}
