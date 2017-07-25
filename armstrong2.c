#include<iostrem.h>
#include<stdio.h>
void main()
{
int l,h,i,num,digit,sum;
clrscr();
printf("\n enter the intervals:");
scanf("%d\t%d",&l,&h);
for(i=l;i<=h;i++)
{
digit=num%10;
sum=sum+digit*digit*digit;
}
if(sum==i)
{
printf("%d",i);
}
getch();
}
