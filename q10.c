#include<stdio.h>
int main(void){
int day_no;
printf("enter a no. between 1 to 7");
scanf("%d",&day_no);
switch(day_no){
case 1:printf("sunday");break;
case 2:printf("monday");break;
case 3:printf("tuesday"); break;
case 4:printf("wednesday"); break;
case 5:printf("thursday") ;break;
case 6:printf("friday"); break;
case 7:printf("saturday"); break;
default:printf("enter a valid day_no.");
}
return 0;}
