#include<iostream.h>
#include<conio.h>
class  A
{
int n,i,r;
public:
void table()
{
cout<< " Enter a integer value ";
cin>>n;
for(i=1;i<=10;++i)
{
r=n*i;
cout<<n<< " * " <<i<< " = " <<r<<endl;
}
}

};
void main()
{
clrscr();
A obj;
obj.table();
getch();
}