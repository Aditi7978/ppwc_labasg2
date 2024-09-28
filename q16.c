#include<stdio.h>
int main(void){
float sal,hra,da,gs;
printf("input basic salary:");
scanf("%f",&sal);
if(sal<=10000){
	hra=0.2*sal;
	da=0.8*sal;}
else if(sal>=10001 && sal<=20000){
	hra=0.25*sal;
	da=0.9*sal;}
else {	hra=0.3*sal;
	da=0.95*sal;}
gs=sal+hra+da;
printf("hra is %f\n",hra);
printf("da is %f\n",da);
printf("gross salary is %f\n",gs);
return 0;}
