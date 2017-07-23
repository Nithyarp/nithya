#include<iostream.h>
#include<stdio.h>
void main()
{
double number;
clrscr();
printf("enter the number:");
scanf("%lf",&number);
if(number>0)
{
if(number==0)
{
printf("the num is %.2f ",number);
else
printf("the num %.2f is positive",number);
}
else
printf("the number %.2f is negative",number);
}
getch();
}
