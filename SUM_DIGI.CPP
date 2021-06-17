#include<iostream.h>
#include<conio.h>
class A
{
int s,r,n;
public:
    void input()
    {
    cout<< " Enter any number ";
    cin>>n;
    }
       void output()
       {
       s=0;
	    while(n>0)
	    {
	    r=n%10;
	    s=s+r;
	    n=n/10;
	    }
	    cout<< " Sum of digit  is : "<<s;
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