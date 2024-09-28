#include<stdio.h>
int main(void){
int amount;
printf("enter amount");
scanf("%d",&amount);
int note_1000=0,note_500=0,note_100=0,note_50=0,note_20=0,note_10=0,note_5=0,note_2=0,note_1=0;
if(amount!=0)
	{note_1000=amount/1000;
	amount=amount-note_1000*1000;}
if(amount!=0)
	{note_500=amount/500;
	amount=amount-note_500*500;}
if(amount!=0)
	{note_100=amount/100;
	amount=amount-note_100*100;}
if(amount!=0)
	{note_50=amount/50;
	amount=amount-note_50*50;}
if(amount!=0)
	{note_20=amount/20;
	amount=amount-note_20*20;}
if(amount!=0)
	{note_10=amount/10;
	amount=amount-note_10*10;}
if(amount!=0)
	{note_5=amount/5;
	amount=amount-note_5*5;}
if(amount!=0)
	{note_2=amount/2;
	amount=amount-note_2*2;}
if(amount!=0)
	{note_1=amount/1;
	amount=amount-note_1*1;}
printf("no. rs 1000 notes %d\n",note_1000);
printf("no. rs 500 notes %d\n",note_500);
printf("no. rs 100 notes %d\n",note_100);
printf("no. rs 50 notes %d\n",note_50);
printf("no. rs 20 notes %d\n",note_20);
printf("no. rs 10 notes %d\n",note_10);
printf("no. rs 5 notes %d\n",note_5);
printf("no. rs 2 notes %d\n",note_2);
printf("no. rs 1 notes %d\n",note_1);
return 0;
}
