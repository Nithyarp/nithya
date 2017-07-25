#include<iostream.h>
#include<stdio.h>
void main()
{
int base, exponent,result;
clrscr();
printf("\n enter the base value:");
scanf("%d",&base);
printf("\n enter the exponent value:");
scanf("%d",&exponent);
result=pow(base,exponent);
printf("%d",result);
getch();
}
