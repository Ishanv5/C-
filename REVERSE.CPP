#include<iostream.h>
#include<conio.h>
class A
{
int r,n;
   public:
       void input()
       {
       cout<< " Enter any number " ;
       cin>>n;
       }
	   void output()
	     {
		while(n>0)
		   {
		   r=n%10;
		   cout<<r;
		   n=n/10;
		   }
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