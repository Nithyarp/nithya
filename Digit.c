#include<iostream.h>
#include<stdio.h>
void main()
{
int a=0,i;
clrscr();
printf("\n enter the number:");
scanf("%d",&i);
while(i>0)
{
i=i/10;
a++;
}
printf("\n no.of digit is:%d",a);
getch();
}
