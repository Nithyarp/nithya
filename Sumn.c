#include<iostream.h>
#include<stdio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("\n the sum of number is %d",sum);
getch();
}
