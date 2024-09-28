#include<stdio.h>
int main(void){
int num;
printf("enter a no.");
scanf("%d",&num);
if(num%5==0 && num%11==0)
	printf("num is divisible by both 5 and 11");
return 0;
}
