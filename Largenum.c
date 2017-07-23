#include<iostream.h>
#include<stdio.h>
void main()
{
double n1,n2,n3;
clrscr();
printf("\n enter the 3 numbers:");
scanf("%lf%lf%lf",&n1,&n2,&n3);
if(n1>=n2&&n1>=n3)
printf("\n %.2f is largest number",n1);
else if(n2>=n1&&n2>=n3)
printf("\n %.2lf is largest number",n2);
else 
printf("\n %.2lf is largest number",n3);
getch();
}
