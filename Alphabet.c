#include<iostream.h>
#include<stdio.h>
void main()
{
char ch;
clrscr();
printf("enter the letter:");
scanf("%c",&ch);
if((ch>='a'&&ch>='z')||(ch>='A'&&ch>='Z'))
printf("\n %c is alphabet",ch);
else
printf("\n %c is not alphabet",ch);
getch();
}
