#include<iostream.h>
#include<stdio.h>
void main()
{
int number,i,reverse=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&number);
while(num)
{
i=num%10;
reverse=reverse*10+i;
number/=10;
}
printf("\n the reverse number is:%d",reverse);
getch();
}
