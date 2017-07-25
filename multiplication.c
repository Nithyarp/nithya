#include<iostream.h>
#include<stdio.h>
void main()
{
int n1,n2,i;
clrscr();
printf("\n enter the number:");
scanf("%d",&n1);
printf("\n enter the limit of the table:");
scanf("%d",&n2);
for(i=1;i<=n2;++i)
{
printf("\n %d*%d=*d",n1,i,n1*i);
}
getch();
