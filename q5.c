#include<stdio.h>
int main(void){
int yr;
printf("enter year");
scanf("%d",&yr);
if((yr%4==0 && yr%100!=0 )|| yr%400==0)
	printf("leap year");
else
	printf("not a leap yr");
return 0;}
