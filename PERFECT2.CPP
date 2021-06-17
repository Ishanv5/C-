#include<iostream.h>
#include<conio.h>
class A
{
int sum,i,n;
public:
    void input()
    {
    cout<< " Enter a number ";
    cin>>n;
    }
    void output()
    {
    sum=0;
    for(i=1;i<n;++i)
	{
	    if(n%i==0)
	    {
	    sum=sum+i;
	    }
	 }
	 if(sum==n)
	 cout<< " Perfect nos ";
	 else
	 cout<< " Not Perfect nos ";
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