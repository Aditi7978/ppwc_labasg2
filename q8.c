#include<stdio.h>
int main(void){
char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	printf("entered character is a vowel");
else
	printf("entered character is not a vowel");
return 0;
}
