#include<iostream.h>
#include<stdio.h>
void main();
{
int l,h,i,flag;
clrscr();
printf("\n enter the interval:");
scanf("%d\t%d",&l,&h);
while(l<h)
{
flag=0;
{
for(i=2;i<=l/2;++i)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d",l);
++l;
}
getch();
}
