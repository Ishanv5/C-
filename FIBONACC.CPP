#include<iostream.h>
#include<conio.h>
class A
{
     int c,a,b,n;
     public:
	void fib()
	{
	    a=0;
	    b=1;
	    cout<< " Enter any nos ";
	    cin>>n;
	    for(int i=1;i<=n;++i)
	       {
	       cout<<a<<ends;
	       c=a+b;
	       a=b;
	       b=c;
	       }
	}
};
void main()
{
clrscr();
A obj;
obj.fib();
getch();
}