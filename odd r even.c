#include<iostream.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("\n enter the number");
scanf("%d",&number);
if(number%2==0)
{
printf("\n %d is even",number);
}
else
{
printf("\n %d is not even number",number);
}
getch();
}
