#include<iostream.h>
#include<stdio.h>
void main()
{
int n,count=1,a=0,b=1,c;
clrscr();
printf("\n enter how many terms want to print:");
scanf("%d",&n);
printf("fibonacci series\n");
printf("%d \t %d",a,b);
while(count<=n)
c=a+b;
printf("%d \t",c);
a=b;
b=c;
count++;
}
getch();
}
