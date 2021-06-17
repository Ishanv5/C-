#include<iostream.h>
#include<conio.h>
class A
{
int f,i,n;
public:
     void input()
     {
     cout<< " Enter a number ";
     cin>>n;
     }
     void output()
     {
       f=1;
     for(i=1;i<=n;++i)
	 {
	 f=f*i;
	 }

     cout<< " factorial of these given nos "<<f;
     }
};
void main()
{
clrscr();
A obj;
obj.input();
obj.output();
getch();
}