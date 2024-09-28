#include<stdio.h>
int main(void){
printf("enter 3 no.s \n");
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
	printf("a is maximum");
if(b>c && b>a)
	printf("b is maximum");
if(c>a && c>b)
	printf("c is maximum");
return 0;
}
