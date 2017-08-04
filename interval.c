#include<iostream.h>
#include<stdio.h>
void main()
{
int i,h,l;
clrscr();
printf("\n enter the lower limit:");
scanf("%d",&l);
printf("\n enter the higher limit:");
scanf("%d",&h);
for(i=l;l<=h;l++)
{
while(l%2==0)
{
printf("\n%d",l);
}
}
getch();
}
