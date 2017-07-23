#include<iostream.h>
#include<stdio.h>
void main()
{
int i,n,a=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
a=a+i;
}
printf("\n the sum of N number is %d",a);
getch();
}
