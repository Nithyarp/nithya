#include<iostream.h>
#include<stdio.h>
void main()
{
int n,num,digit, reverse=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&num);
n=num;
do
{
digit=num%10;
reverse=(reverse*10)+digit;
num=num/10;
}while(num!=0);
printf("\n the reversed number is %d", reverse);
if(n=reverse)
printf("\n palindrome number");
else
printf("\n not a palindrome number");
getch();
}
