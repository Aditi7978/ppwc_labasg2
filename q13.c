#include<stdio.h>
int main(void){
int p,ch,b,m,co;
float percentage;
printf("enter percentage in physics:");
scanf("%d",&p);
printf("enter percentage in chemistry");
scanf("%d",&ch);
printf("enter percentage in biology:");
scanf("%d",&b);
printf("enter percentage in maths:");
scanf("%d",&m);
printf("enter percentage in computer:");
scanf("%d",&co);
percentage=(p+ch+b+m+co)/5;
if(percentage>=90)
printf("grade A");
if(percentage>=80)
printf("grade B");
if(percentage>=70)
printf("grade C");
if(percentage>=60)
printf("grade D");
if(percentage>=40)
printf("grade E");
if(percentage<40)
printf("grade F");
return 0;
}
