#include<stdio.h>
int main(void){
int a,b;
printf("enter two no.s");
scanf("%d%d",&a,&b);
if(a==b)
	printf("a is equal to b");
else if(a>b)
	printf("a is greater than b");
else
	printf("a is less than b");
return 0;
}
