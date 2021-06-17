#include<iostream.h>
#include<conio.h>
class buzz
{
int n;
public:
	void input()
	{
	cout<< " Enter a number ";
	cin>>n;
	}
	     void output()
	     {
	     if(n%7==0 || n%10==7)
	     cout<< " Buzz nos ";
	     else
	     cout<< " Not Buzz nos ";
	     }
};
void main()
{
clrscr();
buzz obj;
obj.input();
obj.output();
getch();
}