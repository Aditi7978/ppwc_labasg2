#include<stdio.h>
int main(void){
char ch;
printf("enter a character\n");
scanf("%c",&ch);
int ascii_value=ch;
if((ascii_value>=65 && ascii_value <=90) || (ascii_value>=97 && ascii_value <=122))
	printf("hence entered character is alphabet");
else
	printf("entered characteris not an alphabet"); 
return 0;
}
