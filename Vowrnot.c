#include<iostream.h>
#include<stdio.h>
void main()
{
char ch;
clrscr();
printf("\n enter the letter:");
scanf("%c",ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("\nthe letter is vowel");
}
else
{
printf("\n the letter is constant");
}
getch();
}
