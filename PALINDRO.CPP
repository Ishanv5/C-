#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,num,digit,rev=0,end1;
cout<< " Enter a positive value : ";
cin>>num;
n=num;
do
{
digit=num%10;
rev=(rev*10)+digit;
num=(num/10);
}while(num!=0);
cout<< " The reverse of the number is : "<<rev<<end1;
if(n==num)
cout<< " The number is palindrome ";
else
cout<< " The number is not a palindrome ";
}