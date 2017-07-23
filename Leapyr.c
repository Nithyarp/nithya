#include<iostream.h>
#include<stdio.h>
void main()
{
int a;
clrscr();
printf("\n enter the year:");
scanf("%d",&a);
if((a%4==0)&&(a%100!=0)||(a%400==0))
printf("\n %d is a leap year",a);
else
printf("\n %d is not a leap year",a);
getch();
}
