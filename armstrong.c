#include<iostream.h>
#include<stdio.h>
void main()
{
int number,number1,result=0,rem,n=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&number);
number1=number;
while(number1!=0)
{
number1=number1/10;
++n;
}
while(number1!=0)
number1=number;
{
rem=number1%10;
result+=pow(rem,n);
number1/=10;
}
if(result==number)
printf("\n the number ie armstrong number");
else
printf("\n the number is not armstrong number");
getch();
}

