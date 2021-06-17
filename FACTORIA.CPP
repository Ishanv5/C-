#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
long factorial=1;
cout<<" Enter an integer value ";
cin>>n;
if(n<0)
cout<< " Error ! factorial of a negative number doesn't exist ";
else
{
for(int i=1;i<=n;++i)
{
factorial *=i;
}
cout<< " Factorial of " <<n<< " = "<< factorial;3
}
}