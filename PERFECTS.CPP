#include<iostream.h>
#include<conio.h>
#include<math.h>
class A
{
   int i,n,s,p;
   public:
       void perfect()
       {
	 cout<< " Enter an integer ";
	 cin>>n;
	 for(i=1;i<=n;++i)
	  {
	     s=sqrt(i*i);
	     p=i*s;
	     cout<<p<<ends;
	  }
       }
};
void main()
{
clrscr();
A obj;
obj.perfect();
getch();
}