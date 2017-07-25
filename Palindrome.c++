#include<iostream.h>
#include<conio.h>
void main()
{
int n,num,i,reverse=0;
clrscr();
Cout<<"enter the number:";
cin>>num;
n=num;
do
{
digit=num%10;
reverse=(reverse*10)+digit;
num=num/10;
}while(num!=0);
cout<<"\n the reverse number is"<<reverse;
if(n==reverse)
cout<<"given number is palindrome";
else
cout<<"given number is not a palindrome";
}
