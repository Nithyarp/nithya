#include<iostream.h>
#include<stdio.h>
void main()
{
int i=1,f=1,number;
clrscr();
printf("\n enter the number:");
scanf("%d",&number);
while(i<=number)
{
f=f*i;
i++;
}
printf("the factorial if the number is:%d",f);
getch();
}
