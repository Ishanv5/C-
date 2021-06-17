#include<iostream.h>
#include<conio.h>
#include<math.h>
class Triangle
{
   float a,b,c,s,area;
     public:
	void input()
	{
	cout<< " Enter three side of triangle ";
	cin>>a>>b>>c;
	}
	void process()
	{
	s=a+b+c/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<< " Area of triangle "<<area;
	}
};
void main()
{
clrscr();
Triangle obj;
obj.input();
obj.process();
getch();
}